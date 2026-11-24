class Solution {
public:
    int countPrimes(int n) {
        if (n<=2) return 0;
        vector<bool> v(n, true);
        v[0] = v[1] = false;
        for (int i=2; i*i<n; i++){
            if (v[i]){
                for (int j=i*i; j<n; j=j+i){
                    v[j] = false;
                }
            }
        }
        int c = 0;
        for (int i=2; i<n; i++){
            if (v[i]) c++;
        }
        return c;
    }
};