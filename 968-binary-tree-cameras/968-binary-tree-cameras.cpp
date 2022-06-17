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
    int ans = 0;
    enum 
    {
        NOT_NEEDED = -1, 
        NO_CAMERA = 0, 
        HAS_CAMERA = 1
    };
    int dfs(TreeNode* root){
        
        if(!root)
            return NOT_NEEDED;
        
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        if(left == NO_CAMERA || right == NO_CAMERA){
            ans++;
            return HAS_CAMERA;
            
        }
        
        if(left == HAS_CAMERA || right == HAS_CAMERA)
            return NOT_NEEDED;
        
        return NO_CAMERA;
    }
    int minCameraCover(TreeNode* root) {
        
        if (dfs(root) == NO_CAMERA) ans++;
        return ans;
        
    }
};