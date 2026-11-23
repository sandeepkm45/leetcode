class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        long long int c = 0;
        for (int i=0; i<n; i++){
            int x=1;
            for (int j = i; j < n; j++){
                x = lcm(x, nums[j]);
                if (x==k) c++;
                if (x>k || k%x!= 0) break;
            }
        }
        return c;
    }
};