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
    bool findTarget(TreeNode* root, int k) {
        
        vector <int> arr;
        
        helper(root,arr);
            
        int n = arr.size();
        
        int i = 0;
        
        int j = n-1;
        
        bool flag = false;
        
        int sum = 0;
        
        while(i<j){

            sum = arr[i] + arr[j];
            
            if(sum == k ){
                
               return true;
   
            }else if (sum > k){
                
                j--;
                
            }else{
                i++;
            }
            
        
        
        }
        
        return false;
        
    }
};