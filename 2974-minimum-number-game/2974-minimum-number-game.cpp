class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> ans(n, 0);
        for (int i=0; i<n; i=i+2){
            ans[i+1] = nums[i];
        }
        for (int i=1; i<n; i=i+2){
            ans[i-1] = nums[i];
        }
        return ans;
    }
};