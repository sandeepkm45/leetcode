class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        double ans = 1;
        if (n<0){
            binForm = -binForm;
            x = 1/x;
        }
        while (binForm > 0){
            if (binForm % 2 == 1){
                ans = ans * x;
            }
            x = x*x;
            binForm = binForm/2;
        }
        return ans;
    }
};