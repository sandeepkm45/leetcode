bool funcn(vector<vector<int>>& grid, int x, int y){
    int m = grid.size();
    int n = grid[0].size();
    for (int i=0; i<n; i++){
        if(i!=y){
            if(grid[x][i]==1) return true;
        }
    }
    for (int i=0; i<m; i++){
        if(i!=x){
            if(grid[i][y]==1) return true;
        }
    }
    return false;
}
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int c=0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if(grid[i][j]==1){
                    if (funcn(grid, i, j)) c++;
                }
            }
        }
        return c;
    }
};