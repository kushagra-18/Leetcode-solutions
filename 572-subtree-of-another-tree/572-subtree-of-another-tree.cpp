class Solution {
public:
    bool f(TreeNode* root, TreeNode* subRoot){
        
        if(root == nullptr || subRoot == nullptr)
            return (root==subRoot);
        
        if(root->val!=subRoot->val)
            return false;
        
        return f(root->left,subRoot->left) && f(root->right,subRoot->right);
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        // if(root==)
        if(root==nullptr)
            return false;
        
        if(f(root,subRoot))
            return true;
        else
        return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
        
    }
};