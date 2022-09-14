/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void dfs(TreeNode *root, unordered_map<int, int> &mp, int &count)
        {

            if (!root)
                return;

            mp[root->val]++;

            if (!root->left && !root->right)
            {

                int cnt = 0;
                for (auto &x: mp)
                {

                    if (x.second % 2 != 0)
                        cnt++;
                }

                if (cnt <= 1)
                    count += 1;

                 mp[root->val]--;
                return;
            }

            dfs(root->left, mp, count);
            dfs(root->right, mp, count);
             mp[root->val]--;
        }
    int pseudoPalindromicPaths(TreeNode *root)
    {

        if (!root)
            return 0;

        int count = 0;

        unordered_map<int, int> mp;

        dfs(root, mp, count);

        return count;
    }
};