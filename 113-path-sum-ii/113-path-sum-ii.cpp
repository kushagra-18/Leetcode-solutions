class Solution {
public:
    void preorder(TreeNode* root,vector<int>&path,vector<vector<int>> &res,int targetSum){
        if(root == nullptr)
            return;
        
         path.push_back(root->val);
        
        if(root->left==nullptr && root->right==nullptr && targetSum == root->val){
            res.push_back(path);
           
        }
        
        
        preorder(root->left,path,res,targetSum-root->val);
        preorder(root->right,path,res,targetSum-root->val);
        
         path.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> path;
        vector<vector<int>> res;
        
        preorder(root,path,res,targetSum);
        
        return res;
        
    }
};