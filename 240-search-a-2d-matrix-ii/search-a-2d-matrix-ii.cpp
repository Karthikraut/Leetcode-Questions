class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix.size();
        int m =matrix[0].size();
        int i=0,j=m-1;
        while(i<=n-1 && j>=0){
            cout<<" i: "<<i<<" j: "<<j<<endl;
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]<target) i++;
            else if(matrix[i][j]>target) j--;
        }
        return false;
    }
};