class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            int count = 0;
            int a = i;
            while (a > 0) {
                int temp = a % 2;
                a = a / 2;
                if (temp == 1) {
                    count++;
                }
            }
            ans.push_back(count);
            // count = 0;
        }
        return ans;
    }
};