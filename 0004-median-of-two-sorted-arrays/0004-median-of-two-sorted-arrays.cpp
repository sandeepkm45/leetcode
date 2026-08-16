class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        for(auto & ele: nums1){
            v.push_back(ele);
        }
        for(auto & ele: nums2){
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        int n = v.size();

        if (n%2!=0){
            return v.at((n-1)/2);
        }
        else{
            return (v.at((n-2)/2)+v.at(n/2))/2.000;
        }

    }
};