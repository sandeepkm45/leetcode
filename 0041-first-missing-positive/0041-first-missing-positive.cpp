class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int x=nums[n-1];
        int y=0;
        if(n==1 && nums[0]==1){
            return 2;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==1 || nums[i+1]==1){
                y++;
            }
            if ((nums[i+1]-nums[i])>1 && nums[i]>0 && nums[i+1]>0){
                x=nums[i];
                break;
            }
        }
        if(y>0){
        return x+1;
        }
        else return 1;
    }
};