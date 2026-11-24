class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = min(n, 2);
        for (int i=0; i<n; i++){
            bool f = true;
            for (int j=i+1; j<n; j++){
                for (int k=i; k<j; k++){
                    if (gcd(nums[k], nums[j])!=1){
                        f = false;
                        break;
                    }
                }
                if (!f) break;
                ans = max(ans, j-i+1);
            }
        }
        return ans;
    }
};