class Solution
{
    public:
        int orangesRotting(vector<vector < int>> &grid)
        {

            queue<pair<int, int>> q;

            int dx[4] = { 1,
                0,
                -1,
                0
            };
            int dy[4] = { 0,
                1,
                0,
                -1
            };

            int time = 0;
            int rotten = 0;
            int tot = 0;

            int n = grid.size();
            int m = grid[0].size();

            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < m; j++)
                {

                    if (grid[i][j] == 2)
                    {
                        q.push({ i,
                            j });
                    }

                    if (grid[i][j] != 0)
                        tot++;
                }
            }

            while (!q.empty())
            {

                int k = q.size();

                rotten += k;

                while (k--)
                {
                    int x = q.front().first;
                    int y = q.front().second;

                    q.pop();

                    for (int i = 0; i < 4; i++)
                    {
                        int nx = x + dx[i];
                        int ny = y + dy[i];

                        if (nx < 0 || nx >= n || ny >= m || ny < 0 || grid[nx][ny] != 1)
                            continue;

                        grid[nx][ny] = 2;

                        q.push({ nx,
                            ny });
                    }
                }

                if (!q.empty())
                    time++;
            }

           	// cout<<time;
            return (tot == rotten) ? time : -1;
        }
};