class Solution {
public:
    typedef pair<int,int> P;
    vector<vector<int> > directions = {{0,1},{1,0},{1,1},{1,-1},{-1,1},{-1,-1},{-1,0},{0,-1}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n =grid.size(), m= grid[0].size();
        if(grid[0][0]!=0 || grid[n-1][m-1]!=0) return -1;
        queue<P> q;
        q.push({0,0});
        vector<vector<int>> result(n,vector<int>(m,INT_MAX));
        result[0][0] =0;
        while(!q.empty()){
            P p =q.front();
            q.pop();
            int x =p.first;
            int y =p.second;
            for(auto dir: directions){
                int new_x = x+dir[0];
                int new_y = y + dir[1];
                if(new_x<n && new_y<m && new_x>=0 && new_y >=0){
                    if(grid[new_x][new_y]==0 && result[new_x][new_y] > result[x][y] +1){
                        result[new_x][new_y]  = result[x][y]+1;
                        q.push({new_x,new_y});
                    }
                }
            }
        }

        return result[n-1][m-1]==INT_MAX? -1:result[n-1][m-1]+1;
    }
};