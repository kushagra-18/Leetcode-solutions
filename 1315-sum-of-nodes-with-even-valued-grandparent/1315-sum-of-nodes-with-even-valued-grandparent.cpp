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
    int sumEvenGrandparent(TreeNode* root) {

        int tot = 0;
        
        queue<TreeNode*> q;
            
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto top = q.front();
                
                q.pop();
                
                if(top->left){
                    
                    q.push(top->left);
      
                    if(top->val%2==0){
                        if(top->left->left)
                            tot += top->left->left->val;
                        if(top->left->right)
                            tot += top->left->right->val;  
                    }
                
                }
                
                 if(top->right){
                    
                    q.push(top->right);
      
                    if(top->val%2==0){
                        if(top->right->right)
                            tot += top->right->right->val;
                        if(top->right->left)
                            tot += top->right->left->val;  
                    }
                
                }
    
            }
        }
        
        return tot;    
        
    }
};