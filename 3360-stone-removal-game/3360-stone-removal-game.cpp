class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10;
        int b = 9;
        while(true){
            if(a==0 || b==0) break;
            if(n<a) return false;
            n = n-a;
            if(n<b) break;
            n = n-b;
            a = a-2;
            b = b-2;
        }
        return true;
    }
};