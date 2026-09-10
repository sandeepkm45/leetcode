class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long c=0;;
        int x = total/cost1;
        int y = total/cost2;
        for (int i=0; i<=x; i++){
            long long left = total-i*cost1;
            c = c+(left/cost2)+1;
        }
        return c;
    }
};