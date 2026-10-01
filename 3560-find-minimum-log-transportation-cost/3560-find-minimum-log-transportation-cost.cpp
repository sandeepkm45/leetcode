class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost = 0;
        long long len1;
        long long len2;
        while(n>k){
            len1 = n-k;
            len2 = k;
            n = n-k;
            cost = cost+ len1*len2;
        }
        while(m>k){
            len1 = m-k;
            len2 = k;
            m = m-k;
            cost = cost+ len1*len2;
        }
        return cost;
    }
};