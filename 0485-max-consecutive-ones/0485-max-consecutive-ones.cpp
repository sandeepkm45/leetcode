class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0, c = 1;
        if (n == 1 && nums[0] == 1) {
            max = 1;
        } else {
            for (int i = 1; i < n; i++) {
                if (nums[i] == nums[i - 1] && nums[i] == 1) {
                    c++;
                    if (max < c) {
                        max = c;
                    }
                } else {
                    c = 1;
                }
            }
        }
        if (max == 0) {
            for (int i : nums) {
                if (i == 1) {
                    max = 1;
                }
            }
        }
        return max;
    }
};