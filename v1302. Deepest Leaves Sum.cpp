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
    int deepestLeavesSum(TreeNode* root) {
        
    if(root == nullptr)
        return 0;
    queue <TreeNode*> q;

    int sum;
    
    int level = 0;

    q.push(root);

    while(!q.empty()){

        int n = q.size();
        level++;
         sum = 0;

        for(int i =0;i<n;i++){

            auto top = q.front();

            q.pop();

                sum += top->val;

            if(top->left)
                q.push(top->left);
            
            if(top->right)
                q.push(top->right);

        }

    }
    
    return sum;

}
};