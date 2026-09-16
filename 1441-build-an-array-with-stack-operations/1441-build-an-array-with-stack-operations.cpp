class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int s = target.size();
        vector <string> v;
        int x = 1;
        for (int i=0; i<s; i++){
            // if (x==n){
            //     if (target[i]==x){
            //         v.push_back("Push");
            //     }
            //     else{
            //         v.push_back("Push");
            //         v.push_back("Pop");
            //     }
            //     break;
            // }
            // if (target[i]==x){
            //     v.push_back("Push");
            // }
            // else{
            //     v.push_back("Push");
            //     v.push_back("Pop");
            // }
            // if(x==n) break;
            // x++;
            while(x!=target[i]){
                v.push_back("Push");
                v.push_back("Pop");
                x++;
            }
            if (target[i]==x){
                v.push_back("Push");
            }
            if(x==n) break;
            x++;
        }
        return v;
    }
};