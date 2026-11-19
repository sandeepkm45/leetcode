class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        int c=0;
        for (auto i : nums1){
            for (int j=0; j<nums2.size(); j++){
                for (int k=j+1; k<nums2.size(); k++){
                    if (1LL*i*i == 1LL*nums2[j]*nums2[k]) c++;
                }
            }
        }
        for (auto i : nums2){
            for (int j=0; j<nums1.size(); j++){
                for (int k=j+1; k<nums1.size(); k++){
                    if (1LL*i*i == 1LL*nums1[j]*nums1[k]) c++;
                }
            }
        }
        return c;
    }
};