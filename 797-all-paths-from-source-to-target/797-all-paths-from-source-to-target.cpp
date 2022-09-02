class Solution
{
    public:

        vector<int> path;
    vector<vector < int>> res;
    void dfs(vector<vector < int>> &graph, int curr, int t)
    {

        path.push_back(curr);

        if (curr == t)
            res.push_back(path);
        else
        {

            for (auto u: graph[curr])
                dfs(graph, u, t);
        }

        path.pop_back();
    }
    vector<vector < int>> allPathsSourceTarget(vector<vector < int>> &graph)
    {

        int t = graph.size() - 1;

        dfs(graph, 0, t);

        return res;
    }
};