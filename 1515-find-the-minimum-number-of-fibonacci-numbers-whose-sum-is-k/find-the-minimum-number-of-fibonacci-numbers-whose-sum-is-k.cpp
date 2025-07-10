class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib;
        int a =1;
        int b=1;
        fib.push_back(a);
        while(b<=k){
            fib.push_back(b);
            int temp = b;
            b =b+a;
            a =temp;
        }
        int n =fib.size();
    
        int i =n-1, ans=0;
        while(k>=0 && i>=0){
            if(fib[i]>k){
                i--;
            }
            else if(fib[i]<=k){
                k -= fib[i];
                ans++;
            }
        }
        return ans;
    }
};