class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n =players.size(), m =trainers.size();
        int i=0, j=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int ans =0;
        while(i<n && j<m){
            if(players[i]<=trainers[j]){
                ans++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};