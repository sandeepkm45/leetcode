class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int c=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[j]==val){
                nums.erase(nums.begin()+j);
                nums.push_back(0);
                c++;
            }
            else j++;
        }
        return n-c;
    }
};