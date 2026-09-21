class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        map <int,int> m;
        for (int i=0; i<nums1.size(); i++){
            for (int j=0; j<nums2.size(); j++){
                if (nums1[i]==nums2[j]){
                    m[nums1[i]]++;
                }
            }
        }
        for (auto i : m){
            v.push_back(i.first);
        }
        return v;
    }
};