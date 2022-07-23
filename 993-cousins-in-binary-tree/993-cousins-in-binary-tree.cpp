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
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue <TreeNode*> q;
        
        unordered_map<int,pair<int,int>> mp;
        
        int depth = 0;
        int parent;
        
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            depth++;
            
            for(int i = 0;i<n;i++){
                
                auto node = q.front();
                q.pop();
                
                if(node->left){
                    mp[node->left->val] = {depth,node->val};
                    q.push(node->left);
                }
                
                if(node->right){
                    mp[node->right->val] = {depth,node->val};
                    q.push(node->right);
                }
                
            }
            
        }
        
         cout<<mp[x].second<<mp[y].second;
        if(mp[x].first==mp[y].first)
            if(mp[x].second!=mp[y].second)
                return true;
        
        return false;
        
    }
};