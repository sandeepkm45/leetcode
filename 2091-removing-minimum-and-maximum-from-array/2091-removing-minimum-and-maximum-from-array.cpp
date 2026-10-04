class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        int maxx = INT_MIN;
        int x=0, y=0;
        for (int i=0; i<n; i++){
            if (minn>nums[i]){
                minn = nums[i];
                x = i;
            }
            if (maxx<nums[i]){
                maxx = nums[i];
                y = i;
            }
        }
        int left1 = x+1;
        int left2 = y+1;
        int right1 = n-x;
        int right2 = n-y;
        int ans1 = max(left1, left2);
        int ans2 = max(right1, right2);
        int ans = min(ans1, ans2);
        ans = min(ans, left1+right2);
        ans = min(ans, left2+right1);
        return ans;
    }
};