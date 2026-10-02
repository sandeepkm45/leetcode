class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector <string> vec;
        string ret;
        for (string s : words){
            for(int i=0; i<s.length(); i++){
                if(s[i]==separator){
                    if(ret==""){

                    }
                    else {
                        vec.push_back(ret);
                        ret = "";
                    }
                }
                else{
                    if (s[i]!=' '){
                        ret = ret + s[i];
                    } 
                }
            }
            if(ret==""){

            }
            else {
                vec.push_back(ret);
                ret = "";
            }
        }
        return vec;
    }
};