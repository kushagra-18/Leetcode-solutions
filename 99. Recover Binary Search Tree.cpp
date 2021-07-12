/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

private:
    void helper(TreeNode* root,TreeNode* &prev,TreeNode* &first,TreeNode* &second){
        
        if(root == nullptr){
            
            return;
        }
        
        helper(root->left,prev,first,second);
        
        if(prev!=nullptr && root->val < prev->val){
            
            if(first == nullptr)
                first = prev;
            second = root;
   
        }
        
        prev = root;
        
      helper(root->right,prev,first,second);      

}
    
    
public:
    void recoverTree(TreeNode* root) {
        
        TreeNode* prev = nullptr;
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;
        
        helper(root,prev,first,second);
        
        swap(first->val,second->val);
  
    }
};