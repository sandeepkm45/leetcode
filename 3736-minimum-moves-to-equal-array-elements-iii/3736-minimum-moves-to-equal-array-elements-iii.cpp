class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx = INT_MIN;
        int n = nums.size();
        for (int i=0; i<n; i++){
            maxx = max(maxx, nums[i]);
        }
        int sum = 0;
        for (int i=0; i<n; i++){
            sum = sum + nums[i];
        }
        return maxx*n - sum;
    }
};