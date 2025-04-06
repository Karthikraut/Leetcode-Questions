class Solution {
public:
    int bestClosingTime(string customers) {
        int n =customers.length();
        vector<int> v(n+1,0);
        //The Shop is close at ith and find the N
        int count=0;
        for(int i=0;i<n;i++){
            v[i] =count;
            if(customers[i]=='N'){
                count+=1;
            }
        }
        v[n] =count; //cls
        count=0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y'){
                count+=1;
            }
            v[i] =v[i]+count;
        }
       int min_num =INT_MAX;
       for(int i=0;i<n+1;i++){
            min_num =min(min_num,v[i]);
       }

       for(int i=0;i<n+1;i++){
            if(v[i]==min_num){
                count=i;
                break;
            }
       }
        return count;
    }
};