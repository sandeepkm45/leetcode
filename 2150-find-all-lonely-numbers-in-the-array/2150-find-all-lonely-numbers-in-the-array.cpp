class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector <int> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n==1) return nums;
        if(nums[0]!=nums[1] && nums[0]+1!=nums[1]){
            v.push_back(nums[0]);
        }
        if(nums[n-2]!=nums[n-1] && nums[n-2]+1!=nums[n-1]){
            v.push_back(nums[n-1]);
        }
        for (int i=1; i<n-1; i++){
            if (nums[i]!=nums[i+1] && nums[i]!=nums[i-1] && nums[i]+1!=nums[i+1] && nums[i]-1!=nums[i-1]){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};