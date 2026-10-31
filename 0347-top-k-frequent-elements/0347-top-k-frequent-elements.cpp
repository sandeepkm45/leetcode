class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> m;
        for (int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector <int> v;
        for (int i=0; i<k; i++){
            int max = INT_MIN;
            int x;
            for (auto i : m){
                if(max<i.second){
                    max=i.second;
                    x=i.first;
                }
            }
            v.push_back(x);
            m.erase(x);
        }
        return v;
    }
};