class Solution {
public:
    double helper(double x, long long n) {
        if(n==1) return x;
        if(n==0) return 1;
        double ans =helper(x,n/2);
        if(n%2 == 1) return ans*ans*x;
        return ans*ans;
    }
    double myPow(double x, int n) {
        if(n<0){
            long long a = (long long)n;
            return 1/helper(x,-a);
        }
        return helper(x,n);
    }
};