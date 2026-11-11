class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long both = min(need1, need2);
        long long remaining1 = need1-both;
        long long remaining2 = need2-both;

        long long ans1 = both*costBoth + remaining1*cost1 + remaining2*cost2;
        long long ans2 = max(need1, need2)*1LL*costBoth;
        long long ans3 = 1LL*need1*cost1 + 1LL*need2*cost2;

        return min(ans1, min(ans2, ans3));
    }
};