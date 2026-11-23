class ProductOfNumbers {
public:
vector <int> v;
    ProductOfNumbers() {
        v.clear();
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        if(k>v.size()) return 1;
        if (k==0) return 1;
        int n = v.size();
        long long sum = 1;
        for (int i=n-1; i>=n-k; i--){
            sum = sum * v[i];
        }
        return sum;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */