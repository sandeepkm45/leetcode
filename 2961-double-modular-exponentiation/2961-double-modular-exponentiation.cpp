int power(int a, int b, int m){
        int ans=1;
        for (int i=0; i<b; i++){
            ans = (ans*a)%m;
        }
        return ans;
    }
class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector <int> v;
        int n = variables.size();
        for (int i=0; i<n; i++){
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];
            int x = power(a, b, 10);
            int y = power(x, c, m);
            if (y==target) v.push_back(i);
        }
        return v;
    }
};