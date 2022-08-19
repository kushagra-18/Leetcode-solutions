class Solution {
public:
    int count = 0;
    void pre(TreeNode* root,int prev){
        
        if(!root)
            return;
        
        if(prev<=root->val){
            count++;
            prev = root->val;
        }
        
        pre(root->left,prev);
        pre(root->right,prev);
        
    }
    
    int goodNodes(TreeNode* root) {
        
    
        pre(root,root->val);
        
        return count;
    }
};