class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int len1 = abs(ax1-ax2);
        int len2 = abs(bx1-bx2);
        int w1 = abs(ay1-ay2);
        int w2 = abs(by1-by2);
        int area = len1*w1 + len2*w2;

        int left = max(ax1, bx1);
        int right = min(ax2, bx2);
        int bottom = max(ay1, by1);
        int top = min(ay2, by2);

        int length = max(0, right-left);
        int width = max(0, top-bottom);

        int overlap = length*width;
        return area-overlap;
    }
};