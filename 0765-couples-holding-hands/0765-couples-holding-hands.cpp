class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int c = 0; 
        for (int i=0; i<row.size(); i=i+2){
            if (row[i]%2==0){
                if(row[i]+1!=row[i+1]){
                    for (int j=i+2; j<row.size(); j++){
                        if(row[i]+1==row[j]){
                            swap(row[i+1],row[j]);
                            c++;
                            break;
                        }
                    }
                }
            }
            else{
                if(row[i]-1!=row[i+1]){
                    for (int j=i+2; j<row.size(); j++){
                        if(row[i]-1==row[j]){
                            swap(row[i+1],row[j]);
                            c++;
                            break;
                        }
                    }
                }
            }
        }
        return c;
    }
};