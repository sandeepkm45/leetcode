class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map <int, vector<int>> m;
        vector<vector<int>> v;
        int n = groupSizes.size();
        for (int i=0; i<n; i++){
            int x = groupSizes[i];
            m[x].push_back(i);
            if(m[x].size()==x){
                v.push_back(m[x]);
                m[x].clear();
            }
        }
        return v;
    }
};