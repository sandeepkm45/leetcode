class Solution {
public:
    int alternateDigitSum(int n) {
        int i=1;
        int sum = 0;
        while (n>0){
            sum = 10*sum + n%10;
            n = n/10;
        }
        n = sum;
        sum = 0;
        cout<<n<<endl;
        while(n>0){
            if(i%2==0){
                sum = sum - n%10;
            }
            else {
                sum = sum + n%10;
            }
            i++;
            n = n/10;
        }
        return sum;
    }
};