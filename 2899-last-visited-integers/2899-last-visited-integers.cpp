class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector <int> v;
        vector <int> ans;
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=-1){
                v.insert(v.begin(), nums[i]);
                k=0;
            }
            if(nums[i]==-1){
                if(k>=v.size()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(v[k]);
                }
                k++;
            }
        }
        return ans;
    }
};