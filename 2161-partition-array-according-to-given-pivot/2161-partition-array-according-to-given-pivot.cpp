int ret(vector<int>& nums, int p) {
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]==p) {
            return i;
        }
    }
    return -1;
}
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int x = ret(nums, pivot);
        int i = x+1;
        while(i<nums.size()){
            if(nums[i]<pivot){
                int y = nums[i];
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin()+x, y);
                x++;
            }
            else {
                i++;
            }
        }
        x = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==pivot){
                x = i;
            }
        }
        for(int i=x-1; i>=0; i--){
            if(nums[i]>pivot){
                int y = nums[i];
                nums.erase(nums.begin()+i);
                x--;
                nums.insert(nums.begin()+x+1, y);
            }
        }
        return nums;
    }
};