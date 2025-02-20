class Solution {
public:
    int arrangeCoins(int n) {
        int x = 0;
        int i=1;
        while(n>=0){
            n = n-i;
            i++;
            x++;
        }
        return x-1;
    }
};