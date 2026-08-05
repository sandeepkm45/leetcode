class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int cmax=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count=count+1;
            }else{
                count=0;
            }
        cmax=max(count,cmax);
        }return cmax;
    }
};