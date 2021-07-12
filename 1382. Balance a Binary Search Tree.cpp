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
    
TreeNode* createTree(vector <int> &arr,int start,int end){
    
    if(start> end){
        return nullptr;
    }
    
    int mid = (start + end)/2;
    
    TreeNode* root = new TreeNode(arr[mid]);
    
    root->left = createTree(arr,start,mid-1);
    root->right = createTree(arr,mid+1,end);
    
    return root;
    
}
    
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
    TreeNode* balanceBST(TreeNode* root) {
        
        vector <int> arr;
        
        helper(root,arr);
        
        int n = arr.size();
        
        return createTree(arr,0,n-1);
        
        
    }
};