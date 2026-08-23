class Solution {
public:
    int hammingWeight(int n) {
        // vector <int> v;
        int c = 0;
        while(n>=1){
            // v.insert(v.begin(),n%2);
            if(n%2==1) c++;
            n=n/2;
        }
        return c;
    }
};