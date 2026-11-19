class Solution {
public:
    void bfs(int sr, int sc, vector<vector<int>>& vis, vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        vis[sr][sc] = 1;
        queue<pair<int,int>> q;
        q.push({sr, sc});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int d = 0; d < 4; d++){
                int nr = row + dr[d];
                int nc = col + dc[d];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m
                   && grid[nr][nc] == '1' && !vis[nr][nc]){
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(grid[row][col] == '1' && !vis[row][col]){
                    count++;
                    bfs(row, col, vis, grid);
                }
            }
        }
        return count;
    }
};