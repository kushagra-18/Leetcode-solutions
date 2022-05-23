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
public:
    bool preOrder(TreeNode* root,int prev){
     
        if(root == nullptr)
            return true;
        
        
        
        if(prev != root->val)
            return false;
       
       return preOrder(root->left,prev) && preOrder(root->right,prev);
    }
    
    bool isUnivalTree(TreeNode* root) {
        
        int prev = root->val;
        
        return preOrder(root,prev);
    }
};