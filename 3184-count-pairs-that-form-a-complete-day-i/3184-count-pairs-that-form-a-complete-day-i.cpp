class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        sort(hours.begin(), hours.end());
        int c=0;
        for (int i=0; i<hours.size(); i++){
            for (int j=i+1; j<hours.size(); j++){
                if((hours[i]+hours[j])%24==0){
                    c++;
                }
            }
        }
        return c;
    }
};