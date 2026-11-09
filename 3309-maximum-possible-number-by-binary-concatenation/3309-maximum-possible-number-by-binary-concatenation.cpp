vector <int> dectobin(int n){
    vector <int> v;
    while(n>0){
        v.insert(v.begin(), n%2);
        n=n/2;
    }
    return v;
}
int dec(vector <int> v1, vector <int> v2, vector <int> v3){
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    reverse(v3.begin(), v3.end());
    long long int x=1;
    long long int sum = 0;
    for (int i=0; i<v3.size(); i++){
        sum = sum + x*v3[i];
        x = x*2;
    }
    for (int i=0; i<v2.size(); i++){
        sum = sum + x*v2[i];
        x = x*2;
    }
    for (int i=0; i<v1.size(); i++){
        sum = sum + x*v1[i];
        x = x*2;
    }
    return sum;
}
class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        vector <int> v1 = dectobin(nums[0]);
        vector <int> v2 = dectobin(nums[1]);
        vector <int> v3 = dectobin(nums[2]);

        long long int x1 = dec(v1, v2, v3);
        long long int x2 = dec(v1, v3, v2);
        long long int x3 = dec(v2, v1, v3);
        long long int x4 = dec(v2, v3, v1);
        long long int x5 = dec(v3, v1, v2);
        long long int x6 = dec(v3, v2, v1);

        long long int ans = max(x1, x2);
        ans = max(ans, x3);
        ans = max(ans, x4);
        ans = max(ans, x5);
        ans = max(ans, x6);
        return ans;
    }
};