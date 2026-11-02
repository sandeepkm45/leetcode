class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> x = board;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int c = 0;
                if(j+1<n && x[i][j+1]==1){
                    c++;
                }
                if(j-1>=0 && x[i][j-1]==1){
                    c++;
                }
                if(i+1<m && x[i+1][j]==1){
                    c++;
                }
                if(i-1>=0 && x[i-1][j]==1){
                    c++;
                }
                if(i-1>=0 && j-1>=0 && x[i-1][j-1]==1){
                    c++;
                }
                if(i+1<m && j+1<n && x[i+1][j+1]==1){
                    c++;
                }
                if(i+1<m && j-1>=0 && x[i+1][j-1]==1){
                    c++;
                }
                if(i-1>=0 && j+1<n && x[i-1][j+1]==1){
                    c++;
                }

                if(x[i][j]==0){
                    if(c==3){
                        board[i][j]=1;
                    }
                }

                else{
                    if(c<2){
                        board[i][j]=0;
                    }
                    else if(c>3){
                        board[i][j]=0;
                    }
                    else{
                        board[i][j]=1;
                    }
                }
            }
        }
    }
};