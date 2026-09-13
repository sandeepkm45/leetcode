class Solution {
public:
    int digitFrequencyScore(int n) {
        vector <int> v(10,0);
        while(n>0){
            v[n%10] = v[n%10]+1;
            n= n/10;
        }
        int sum = 0;
        for (int i=0; i<10; i++){
            sum = sum + i*v[i];
        }
        return sum;
    }
};