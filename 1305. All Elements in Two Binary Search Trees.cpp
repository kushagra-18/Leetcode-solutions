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
    
    void helper(TreeNode* root1, vector <int> &arr){
        
        if(root1 == nullptr){
            
            return ;
        }
        
        helper(root1->left,arr);
        arr.push_back(root1->val);
        helper(root1->right,arr);
        
    }
    
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector <int> arr;
        
        helper(root1,arr);
        helper(root2,arr);
        
        sort(arr.begin(),arr.end());
        
        return arr;
        
    }
};