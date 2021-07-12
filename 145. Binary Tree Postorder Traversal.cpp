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
    
    void helper(TreeNode* root, vector <int> &arr){
        
        if(root!=nullptr){
            
          
            helper(root->left,arr);
            helper(root->right,arr);
             arr.push_back(root->val);
            
        }
        
        
    }
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector <int> arr;
        
        helper(root,arr);
        
        return arr;
        
    }
};