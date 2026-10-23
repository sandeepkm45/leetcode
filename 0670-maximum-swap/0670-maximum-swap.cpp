class Solution {
public:
    int maximumSwap(int num) {
        vector <int> v;
        while(num>0){
            int x = num%10;
            v.insert(v.begin(), x);
            num = num/10;
        }
        for (int j=0; j<v.size(); j++){
            int x = v[j];
            int maxx = INT_MIN;
            int y = -1;
            for (int i=j+1; i<v.size(); i++){
                if(maxx<=v[i]){
                    maxx = v[i];
                    y=i;
                }
            }
            if (y!=-1 && maxx>x){
                swap(v[y], v[j]);
                break;
            }
        }
        int ans = 0;
        for (int x : v) {
            ans = ans*10 + x;
        }
        return ans;
    }
};