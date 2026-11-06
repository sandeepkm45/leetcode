class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string x;
        for (string i : words){
            x=x+i;
            if(x==s) return true;
        }
        return false;
    }
};