class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1){
            if (nums[0]-nums[0]<=k) return 0;
            else return -1;
        }
        for (int i=0; i<n; i++){
            int maxx=INT_MIN, minn=INT_MAX;
            for (int j=0; j<=i; j++){
                maxx = max(maxx,nums[j]);
            }
            for (int j=i; j<n; j++){
                minn = min(minn,nums[j]);
            }
            if (maxx-minn<=k) return i;
        }
        return -1;
    }
};