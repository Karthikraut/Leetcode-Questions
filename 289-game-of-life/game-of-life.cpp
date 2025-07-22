class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n =board.size(), m= board[0].size();
        vector< vector<int> > ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = 0;
                //up down
                if( i<n-1 && board[i+1][j]==1 ){
                    count++;
                }
                 if(i>0 && board[i-1][j]==1){
                    count++;
                }
                //left right
                if(j<m-1 && board[i][j+1]==1 ){
                    count++;
                }
                 if( j>0 && board[i][j-1]==1){
                    count++;
                }
                //Diagonal 1
                if(i<n-1 && j<m-1 && board[i+1][j+1]){
                    count++;
                }
                 if(i>0 && j>0 && board[i-1][j-1] ){
                    count++;
                }
                if(i>0 && j<m-1 && board[i-1][j+1] ){
                    count++;
                }
                if(i<n-1 && j>0 && board[i+1][j-1]){
                    count++;
                }
                if(count<2 ||count>3){
                    ans[i][j] =0;
                }
                else if((count==2 || count==3) && board[i][j]==1){
                    ans[i][j] =1;
                }
                else if(board[i][j] == 0 && count==3){
                    ans[i][j] = 1;
                }
            }
        } 

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j] =ans[i][j];
            }
        }
    }
};