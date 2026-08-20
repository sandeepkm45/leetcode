class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> vec(nums.size(),1);
        int prefix = 1, suffix = 1;
        for (int i=1; i<nums.size(); i++){
            vec[i] = vec[i-1] * nums[i-1];
        }
        for (int i=nums.size()-2; i>=0; i--){
            suffix = nums[i+1]*suffix;
            vec[i]=vec[i]*suffix;
        }
        return vec;
    }
};