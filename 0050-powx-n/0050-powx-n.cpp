class Solution {
public:
    double myPow(double x, long long int n) {
        if (n < 0) return myPow(1.0 / x, -n);
        if (n == 0) return 1;
        if (n == 1) return x;
        if (n == 2) return x * x;
        if (n % 2) return x * myPow(x, n - 1);
        return myPow(myPow(x, n / 2), 2);
    }
};