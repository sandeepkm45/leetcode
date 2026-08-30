class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> v;
        int n = nums.size();
        int size = n;
        if (n==1) return 1;
        int count = 1;
        for(int i=n-2; i>=0; i--){
            if (nums[i]==nums[i+1]){
                count++;
            }
            if (nums[i]!=nums[i+1]){
                count = 1;
            }
            if (count>2){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                size--;
            }
        }
        return size;
    }
};