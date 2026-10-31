class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1 = 0;
        int score2 = 0;
        int c1=0;
        int c2=0;
        for (int i=0; i<player1.size(); i++){
            if(c1>0){
                score1 = score1+2*player1[i];
                c1--;
            }
            else{
                score1 = score1+player1[i];
            }
            if(c2>0){
                score2 = score2+2*player2[i];
                c2--;
            }
            else{
                score2 = score2+player2[i];
            }
            if(player1[i]==10){
                c1=2;
            }
            if(player2[i]==10){
                c2=2;
            }
        }
        if(score1>score2) return 1;
        else if(score1==score2) return 0;
        else return 2;
    }
};