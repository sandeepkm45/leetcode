class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currSum1=0, maxSum1=INT_MIN;
        for(auto &ele : nums){
            currSum1=currSum1+ele;
            maxSum1=max(currSum1,maxSum1);
            if(currSum1<0){
                currSum1=0;
            }
        }
        int currSum2=0, maxSum2=INT_MAX;
        for(auto &ele : nums){
            currSum2=currSum2+ele;
            maxSum2=min(currSum2,maxSum2);
            if(currSum2>0){
                currSum2=0;
            }
        }
        maxSum2 = abs(maxSum2);
        return max(maxSum1, maxSum2);
    }
};