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
class FindElements {
public:
    set<int> st;
    
    void createTree(TreeNode* root){
        
        if(root==nullptr)
            return;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        root->val = 0;
        
        st.insert(0);
        
        while(!q.empty()){

            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto node = q.front();
                q.pop();
                
                if(node->left){
                    
                    node->left->val = (2*node->val) + 1;
                    
                    st.insert((2*node->val) + 1);
                    q.push(node->left);
                    
                }
                
                 if(node->right){
                    
                    node->right->val = (2*node->val) + 2;
                    
                    st.insert((2*node->val) + 2);
                     
                     q.push(node->right);
                    
                }
                
            }
    
        }
        
        
        
    }
    FindElements(TreeNode* root) {
        
        createTree(root);
        
        
    }
    
    bool find(int target) {
        
        if(st.find(target)!=st.end())
            return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */