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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == nullptr){
            
            return {};
        }
        
        vector<vector<int>> res;
        vector <int> ans;
        
        queue <TreeNode*> q;
        
        q.push(root);
        q.push(nullptr);
        
        while(q.size()>0){
            
            
            
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr == nullptr){
                    
                res.push_back(ans);
                    
                ans.clear();
                
                if(q.empty()){
                    
                    break;
                }
                
                q.push(nullptr);
                          
                }
            
            else{
            
                ans.push_back(curr->val);
            
            if(curr->left!=nullptr){
                
                q.push(curr->left);
               
                }
            
            if(curr->right!=nullptr){
                
                q.push(curr->right);
                
                }
        }
            
            
            
        }
        
        return res;
        
    }
};