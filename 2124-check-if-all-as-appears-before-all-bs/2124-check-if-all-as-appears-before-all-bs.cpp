class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int i=0;
        while(i<n){
            if(s[i]=='b'){
                break;
            }
            i++;
        }
        for (int j=i; j<n; j++){
            if(s[j]=='a') return false;
        }
        return true;
    }
};