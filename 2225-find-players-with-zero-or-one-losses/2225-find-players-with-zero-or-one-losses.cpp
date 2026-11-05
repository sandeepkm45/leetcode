
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> m1;
        map<int, int> m2;
        vector<int> v1;
        vector<int> v2;
        for(int i=0; i<matches.size(); i++){
            m2[matches[i][0]]++;
            m2[matches[i][1]]++;

            m1[matches[i][1]]++;
        }
        for(auto i : m2){
            if(m1[i.first]==0){
                v1.push_back(i.first);
            }
        }
        for(auto i : m1){
            if(i.second==1){
                v2.push_back(i.first);
            }
        }
        return {v1, v2};
    }
};
