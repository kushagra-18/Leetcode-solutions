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
    vector<int> largestValues(TreeNode* root) {
        
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        
        vector<int> res;
        
        int maxx = INT_MIN;
        
        q.push(root);
        
        
        while(!q.empty()){
            
            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto node = q.front();
                
                q.pop();
                
                maxx = max(maxx,node->val);
                
                if(node->left)
                    q.push(node->left);
                
                if(node->right)
                    q.push(node->right);                
                
            }
            
            res.push_back(maxx);
            maxx = INT_MIN;
            
        }
        
        return res;
        
        
    }
};