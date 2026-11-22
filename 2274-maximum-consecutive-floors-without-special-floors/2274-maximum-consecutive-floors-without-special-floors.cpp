class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int c = 0;
        int ans = 0;
        int n = special.size();
        sort(special.begin(), special.end());
        int i = bottom;
        for (int j=0; j<n; j++){
            c = special[j]-i;
            ans = max(ans, c);
            i = special[j]+1;
        }
        c = top-i+1;
        ans = max(ans, c);
        return ans;
    }
};