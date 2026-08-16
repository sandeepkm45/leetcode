class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector <int> v;
        vector <vector<int>> vec;
        for (int i=0; i<r; i++){
            for (int j=0; j<c; j++){
                if (matrix[i][j]==0){
                    v.push_back(i);
                    v.push_back(j);
                    vec.push_back(v);
                    v.clear();
                }
            }
        }
        int row = vec.size();
        int col = 2;
        for (int i=0; i<row; i++){
            int x = vec[i][0];
            int y = vec[i][1];
            for (int j=0; j<r; j++){
                matrix[j][y]=0;
            }
            for (int j=0; j<c; j++){
                matrix[x][j]=0;
            }
        }
    }
};