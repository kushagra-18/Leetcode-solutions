class Solution {
public:
    bool f(TreeNode* root, TreeNode* subRoot){
        
        if(root == nullptr || subRoot == nullptr)
            return (root==subRoot);
        
        if(root->val!=subRoot->val)
            return false;
        
        return f(root->left,subRoot->left) && f(root->right,subRoot->right);
        
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        return f(s, t)
      || (s->left && isSubtree(s->left, t))
      || (s->right && isSubtree(s->right, t));
  }
};