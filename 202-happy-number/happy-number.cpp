class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            int a =n;
            int num=0;
            while(a){
                num = num +(a%10)*(a%10);
                a=a/10;
            }
            n=num;
            cout<<num<<" ";
            if(n==1 || n==7) return true;
            else if(n/10==0) {cout<<"Hello"; return false;}
        }
        return true;
    }
};