class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int c1=1;
        int c2=1;
        int maxx1 = INT_MIN;
        int maxx2 = INT_MIN;
        for (int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]) c1++;
            else {
                maxx1=max(maxx1, c1);
                c1=1;
            }
            if(nums[i]<nums[i-1]) c2++;
            else {
                maxx2=max(maxx2, c2);
                c2=1;
            }
        }
        maxx1 = max(maxx1, c1);
        maxx2 = max(maxx2, c2);
        return max(maxx1, maxx2);
    }
};