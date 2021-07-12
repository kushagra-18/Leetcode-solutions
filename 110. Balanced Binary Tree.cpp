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
    
    int helper(TreeNode* root){
        
        if (root == nullptr){
            return 0;
        }
        
        int leftNode = helper(root->left);
        
        if (leftNode == -1 ){
            return -1;
        }
        
        int rightNode = helper(root->right);
        
         if (rightNode == -1 ){
            return -1;
        }
        
        if(abs(rightNode - leftNode) > 1 ){
            
            return -1;
        }else{

        return max(leftNode,rightNode) + 1;
        }
        
        
    }
    
public:
    bool isBalanced(TreeNode* root) {
        
        return helper(root)!= -1;
        
    }
};