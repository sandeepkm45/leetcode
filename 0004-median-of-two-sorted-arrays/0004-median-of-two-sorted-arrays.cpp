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
        int x=(n-1)/2;
        cout<<x;
        if (n%2!=0){
            return v.at(x);
        }
        else{
            return (v.at(x)+v.at(x+1))/2.000;
        }

    }
};