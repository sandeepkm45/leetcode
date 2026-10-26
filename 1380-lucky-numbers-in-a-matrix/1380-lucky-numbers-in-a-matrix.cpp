class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        map <int, int> mp;
        for (int i=0; i<m; i++){
            int minn = INT_MAX;
            for (int j=0; j<n; j++){
                minn = min(minn, matrix[i][j]);
            }
            mp[minn]++;
        }
        for (int i=0; i<n; i++){
            int maxx = INT_MIN;
            for (int j=0; j<m; j++){
                maxx = max(maxx, matrix[j][i]);
            }
            mp[maxx]++;
        }
        int x;
        int y=0;
        for (auto i : mp){
            if (i.second>1){
                x = i.first;
                y++;
            } 
        }
        if (y==0) return {};
        return {x};
    }
};