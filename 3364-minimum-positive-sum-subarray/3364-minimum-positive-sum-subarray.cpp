
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minn = INT_MAX;
        for (int i=l; i<=r; i++){
            int sum = 0;
            for (int k=0; k<i; k++){
                sum = sum + nums[k];
            }
            if (sum>0){
                minn = min(minn, sum);
            }
            for (int start = 1; start + i <= n; start++) {
                sum = sum - nums[start-1] + nums[start+i-1];
                if (sum>0){
                    minn = min(minn, sum);
                }
            }
        }
        if (minn == INT_MAX) return -1;
        return minn;
    }
};
