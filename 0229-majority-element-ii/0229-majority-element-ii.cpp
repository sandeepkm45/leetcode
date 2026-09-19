class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> v;
        for (int i=0; i<n; i++) {
            v[nums[i]]++;
        }
        vector<int> vec;
        for (auto x : v) {
            if (x.second>n/3) {
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};