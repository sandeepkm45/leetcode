class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int, long long> mp;
        long long ans = 0;
        for (int x : nums){
            int g = gcd(x, k);
            for (auto &it : mp){
                if (1LL*g*it.first%k == 0){
                    ans = ans+it.second;
                }
            }
            mp[g]++;
        }
        return ans;
    }
};