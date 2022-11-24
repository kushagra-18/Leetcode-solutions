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
    void mapFind(unordered_map<int,int> &mp,vector <int> &res){
        
        
        int currMax = INT_MIN;;
        int k = 0;
        
        
        for(auto x: mp){
            
            k = x.second;
            
            currMax = max(currMax,k);
            }
        
        
        for(auto x :mp)
            
            if(x.second == currMax)
                res.push_back(x.first);
              
        }
    
    
public: 
    void inorder(TreeNode* root,vector<int> &arr){
        
        if(root == nullptr)
            return;
        
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
 
    
}
public:
    vector<int> findMode(TreeNode* root) {
        
        unordered_map<int,int> mp;
        vector<int> arr;
        
        inorder(root,arr);
        
        for(auto i:arr){
            
            mp[i]++;
        }
        
        vector <int> res;
        
        mapFind(mp,res);
        
        return res;
    }
};