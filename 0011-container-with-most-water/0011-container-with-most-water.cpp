class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0; int j = n-1;
        int maxx = INT_MIN;
        while(i<j){
            int area = (j-i) * min(height[i], height[j]);
            maxx = max(area,maxx);
            if(height[i]<height[j]){
                i++;
            }
            else j--;
        }
        return maxx;
    }
};