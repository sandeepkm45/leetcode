class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector <int> v;
        vector <vector<int>> vec;
        int n = grid.size();
        for (int i=0; i<n; i++){
            v.clear();
            for (int j=0; j<n; j++){
                v.push_back(grid[i][j]);
            }
            vec.push_back(v);
        }
        for (int i=0; i<n; i++){
            v.clear();
            for (int j=0; j<n; j++){
                v.push_back(grid[j][i]);
            }
            vec.push_back(v);
        }
        int c=0;
        for (int i=0; i<n; i++){
            for (int j=n; j<2*n; j++){
                if (vec[i]==vec[j]) c++;
            }
        }
        return c;
    }
};