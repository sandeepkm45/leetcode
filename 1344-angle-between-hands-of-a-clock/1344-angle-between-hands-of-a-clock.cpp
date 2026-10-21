class Solution {
public:
    double angleClock(int hour, int minutes) {
      double x = hour*5 + minutes/12.0;
        x = fmod(x, 60);
        double y = minutes;
        double ans = abs(x - y);
        ans = min(ans, 60 - ans);
        ans = ans * 6;
        return ans;
    }
};