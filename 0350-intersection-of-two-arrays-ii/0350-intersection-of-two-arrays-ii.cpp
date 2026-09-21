class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        map <int, int> m;
        for (int i=0; i<nums1.size(); i++){
            for (int j=0; j<nums2.size(); j++){
                if (nums1[i]==nums2[j]){
                    m[nums1[i]]++;
                    nums2[j]=INT_MIN;
                    break;
                }
            }
        }
        for (auto i : m){
            for (int x=0; x<i.second; x++){
                v.push_back(i.first);
            }
        }
        return v;
    }
};