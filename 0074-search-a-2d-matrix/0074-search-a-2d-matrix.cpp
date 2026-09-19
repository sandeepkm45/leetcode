class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0, j=m-1;
        int md, mid;
        while(i<=j){
            md = i + (j-i)/2;
            if (matrix[md][0]<=target && matrix[md][n-1]>=target){
                int x=0, y=matrix[md].size()-1;
                while (x<=y){
                    mid = x + (y-x)/2;
                    if (matrix[md][mid]==target){
                        return true;
                    }
                    if (matrix[md][mid]>target){
                        y = mid-1;
                    }
                    else{
                        x = mid+1;
                    }
                    
                }
                return false;
                
            }
            if (matrix[md][0]>target){
                j = md-1;
            }
            else {
                i = md+1;
            }
        }
        return false;
    }
};