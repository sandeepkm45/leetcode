class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        map<int, int> days;
        days[1] = 31;
        days[2] = 28;
        days[3] = 31;
        days[4] = 30;
        days[5] = 31;
        days[6] = 30;
        days[7] = 31;
        days[8] = 31;
        days[9] = 30;
        days[10] = 31;
        days[11] = 30;
        days[12] = 31;

        string s;
        s = s + arriveAlice[0];
        s = s + arriveAlice[1];
        int x1 = stoi(s);

        s = "";
        s = s + leaveAlice[0];
        s = s + leaveAlice[1];
        int x2 = stoi(s);

        s = "";
        s = s + arriveBob[0];
        s = s + arriveBob[1];
        int y1 = stoi(s);

        s = "";
        s = s + leaveBob[0];
        s = s + leaveBob[1];
        int y2 = stoi(s);

        string t;
        t = t + arriveAlice[3];
        t = t + arriveAlice[4];
        int a1 = stoi(t);

        t = "";
        t = t + leaveAlice[3];
        t = t + leaveAlice[4];
        int a2 = stoi(t);

        t = "";
        t = t + arriveBob[3];
        t = t + arriveBob[4];
        int b1 = stoi(t);

        t = "";
        t = t + leaveBob[3];
        t = t + leaveBob[4];
        int b2 = stoi(t);

        int x = max(x1, y1);
        int y = min(x2, y2);

        if (x>y) return 0;
        if (x==y) {
            int start;
            if (x1 == x && y1 == x)
                start = max(a1, b1);
            else if (x1 == x)
                start = a1;
            else
                start = b1;
                
            int end;
            if (x2 == y && y2 == y)
                end = min(a2, b2);
            else if (x2 == y)
                end = a2;
            else
                end = b2;

            if (start > end)return 0;
            return end - start + 1;
        }
        int ans = 0;
        int start;

        if (x1==x && y1==x) start = max(a1, b1);
        else if (x1 == x) start = a1;
        else start = b1;
        ans = ans + days[x]-start+1;

        for (int i = x + 1; i < y; i++) {
            ans = ans+days[i];
        }

        int end;
        if (x2 == y && y2 == y) end = min(a2, b2);
        else if (x2 == y) end = a2;
        else end = b2;
        ans = ans+end;
        return ans;
    }
};
