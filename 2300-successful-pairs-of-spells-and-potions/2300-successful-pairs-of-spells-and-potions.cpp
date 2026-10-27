class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> v;
        sort(potions.begin(), potions.end());
        for (int i=0; i<n; i++){
            int low = 0;
            int high = m - 1;
            int pos = m;
            while (low<=high){
                int mid = low+(high-low)/2;
                long long x = 1LL * spells[i]*potions[mid];
                if (x>=success){
                    pos = mid;
                    high = mid-1;
                }
                else {
                    low = mid+1;
                }
            }
            int c = m - pos;
            v.push_back(c);
        }
        return v;
    }
};