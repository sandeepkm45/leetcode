
class Solution {
public:
    int countTime(string time) {
        string s = time;
        int c = 1;
        if(s[0]=='?' && s[1]=='?'){
            c = c*24;
        }
        else {
            if(s[0]=='?'){
                int x = s[1]-'0';
                if(x>3) c = c*2;
                else c = c*3;
            }
            if(s[1]=='?'){
                if(s[0]=='2') c = c*4;
                else c = c*10;
            }
        }
        if(s[3]=='?'){
            c = c*6;
        }
        if(s[4]=='?'){
            c = c*10;
        }
        return c;
    }
};
