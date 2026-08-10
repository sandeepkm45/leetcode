class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=n-1;
        if (k==n) return ;
        if (k>n) k=k%n;
        while(i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }
        i=0;j=k-1;
        while(i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }
        i=k;j=n-1;
        while(i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }
    }
};