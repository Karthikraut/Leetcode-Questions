class Solution {
public:
    int reverseBits(int n) {
        int ans =0;
        int i =31,j=0;
        while( i>=0 &&  j<=31 && n!=0){
            if(n& (1<<j)){
                ans =  ans|(1<<i);
            }
            i--;
            j++;
        }
        return ans;
    }
};