class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k){
        int n = nums.size();
        long long int c = 0;
        for (int i=0; i<n; i++){
            int x=0;
            for (int j = i; j < n; j++){
                x = gcd(x, nums[j]);
                if (x==k) c++;
            }
        }
        return c;
    }
};