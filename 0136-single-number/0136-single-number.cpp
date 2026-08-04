class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        sort(nums.begin(),nums.end());
        int length = nums.size();
        if (length == 1){
            result = nums[0];
        }
        else if (nums[0]!=nums[1]){
            result = nums[0];
        }
        else if (nums[length-1]!=nums[length-2]){
            result = nums[length-1];
        }
        else {
            for (int i=1; i<length-1; i++){
            if (nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                result = nums[i];
            }
        }
        }
        return result;
    }
};