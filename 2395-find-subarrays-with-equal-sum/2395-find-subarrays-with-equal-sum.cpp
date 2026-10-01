class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size()-1; i++){
            int sum = nums[i] + nums[i + 1];
            v.push_back(sum);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size()-1; i++){
            if(v[i] == v[i + 1]) return true;
        }
        return false;
    }
};