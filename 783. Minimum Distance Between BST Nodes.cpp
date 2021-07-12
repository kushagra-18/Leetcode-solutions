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
    void helper(TreeNode* root, vector <int> &arr){
        
        if(root == nullptr){
            return ;
        }
        
        helper(root->left,arr);
        arr.push_back(root->val);
        helper(root->right,arr);
        
    }
    
public:
    int minDiffInBST(TreeNode* root) {
        
    
        vector <int> arr;
        
        helper(root,arr);
        
        if(arr.size() == 1){

            return arr[0];
        }
        
        int minDiff = arr[1] - arr[0];
        
        for(int i = 1;i<arr.size();i++){
            
            int currMin = arr[i] - arr[i-1];
            
            minDiff = min(minDiff,currMin);
            
        }
        return minDiff;
        
    }
};s