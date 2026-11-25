
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i=0; i<n; i++){
            int sum = 0;
            for (int j=i; j<n; j++){
                sum = sum+nums[j];
                for (int k=i; k<=j; k++){
                    if (nums[k]==sum){
                        ans++;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
