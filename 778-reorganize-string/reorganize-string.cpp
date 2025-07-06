class Solution {
public:
    typedef pair<int,char> P;
    string reorganizeString(string s) {
        priority_queue< P,vector<P> > pq;
        int n = s.length();
        unordered_map<char,int> mp;

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        for(auto [ele,count]:mp){
            if(count > (n+1)/2) return "";
            pq.push({count,ele});
        }
        
        string ans ="";
        while(pq.size()>=2){
            P a = pq.top();
            a.first--;
            pq.pop();
            P b = pq.top();
            b.first--;
            pq.pop();

            if(a.first!=0) pq.push(a);
            if(b.first!=0) pq.push(b);

            ans =ans + a.second + b.second;
        }
        if(pq.size()>0) ans += pq.top().second;
        return ans;
    }
};