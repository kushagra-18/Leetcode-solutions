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
    
    void helper(TreeNode* root, vector <int> &arr, int level){
        
        if(root == nullptr){
            
            return ;
        }
        
        if(arr.size() < level){

        arr.push_back(root->val);
            
        }
        
        helper(root->right,arr,level+1);
        helper(root->left,arr,level+1);

    }
    
public:
    vector<int> rightSideView(TreeNode* root) {
        
        vector <int> arr;
        
        helper(root,arr,1);
        
        return arr;
        
    }
};