Question : Flood Fill Algo


class Solution {
public:
    void dfs(vector<vector<char>>& grid, pair<int, int> point, map<pair<int, int>, bool>& vis){
        int n = grid.size();
        int m = grid[0].size();
        int x = point.first;
        int y = point.second;
        vector< pair<int, int> > neighbours;
        for(int dx : {-1, 1}){
            if(x+dx>=0 and x+dx<n){
                if(grid[x+dx][y]=='1')
                    neighbours.push_back({x+dx, y});
            }
        }
        
        for(int dy : {-1, 1}){
            if(y+dy>=0 and y+dy<m){
                if(grid[x][y+dy]=='1')
                    neighbours.push_back({x, y+dy});
            }
        }
        vis[{x,y}]=true;
        for(pair<int, int> neighbour : neighbours){
            if(vis[neighbour]) continue;
            dfs(grid, neighbour, vis);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // grid = [ [a,b,c,...], [...]  ]
        int n = grid.size();
        if(n == 0) return 0;
        int m = grid[0].size();
        if(m == 0) return 0;
        int islands = 0;
        map<pair<int, int>, bool> vis;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[{i,j}] or grid[i][j]=='0') continue;
                dfs(grid, {i,j}, vis);
                islands++;
            }
        }
        return islands;
    }
};
