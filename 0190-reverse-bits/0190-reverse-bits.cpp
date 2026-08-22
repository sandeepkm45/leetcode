class Solution {
public:
    int reverseBits(int n) {
        vector <int> v;
        int no = n;
        long long int sum = 0;
        long long int x = 1;
        while (no>0){
            v.insert(v.begin(),no%2);
            no = no/2;
        }
        int size = v.size();
        for (int i = size; i<32; i++){
            v.insert(v.begin(),0);
        }
        size = v.size();
        for (int i=0; i<size; i++){
            if(v[i]==1){
                sum = sum + x;
            }
            x=x*2;
        }
        return sum;
    }
};