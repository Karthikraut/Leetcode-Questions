class Solution {
public:
    typedef pair<char,int> P;
    string repeatLimitedString(string s, int repeatLimit) {
        int n =s.length();
        priority_queue<P,vector<P> > pq;
        unordered_map<char,int> mp;
        for(char ele:s){
            mp[ele]++;
        }
        for(auto ele:mp){
            pq.push(ele);
        }
        string ans ="";
        while(pq.size()>=2){
            P firstLargest =pq.top();
            pq.pop();
            P secondLargest =pq.top();
            pq.pop();
            int len = min(repeatLimit,firstLargest.second);
            while(len--){
                ans += firstLargest.first;
                firstLargest.second--;
            }
            if(firstLargest.second==0){
                pq.push(secondLargest);
            }
            else{
                ans += secondLargest.first;
                secondLargest.second--;
                pq.push(firstLargest);
                if(secondLargest.second>0) pq.push(secondLargest);
            }
        }
        P a =pq.top();
        while(a.second>0 && repeatLimit>0){
            ans += a.first;
            a.second--;
            repeatLimit--;
        }
        return ans;
    }
};