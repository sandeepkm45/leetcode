class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0;
        while (true){
            bool ok = true;
            for (int i=1; i<nums.size(); i++){
                if (nums[i]<nums[i-1]){
                    ok = false;
                    break;
                }
            }
            if (ok) return ans;
            int pos = 0;
            long long minn = LLONG_MAX;
            for (int i=0; i+1<nums.size(); i++){
                long long sum = 1LL * nums[i]+nums[i+1];
                if (sum<minn){
                    minn = sum;
                    pos = i;
                }
            }
            nums[pos] = nums[pos]+nums[pos+1];
            nums.erase(nums.begin()+pos+1);
            ans++;
        }
    }
};