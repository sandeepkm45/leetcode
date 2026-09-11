class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int c=0;
        int n=colors.size();
        for (int i=1; i<n-1; i++){
            if (colors[i]!=colors[i-1] && colors[i]!=colors[i+1]){
                c++;
                cout<<"1 ";
            }
        }
        if (colors[0]!=colors[n-1] && colors[n-1]!=colors[n-2]){
            c++;
        }
        if (colors[1]!=colors[0] && colors[n-1]!=colors[0]){
            c++;
        }
        return c;
    }
};