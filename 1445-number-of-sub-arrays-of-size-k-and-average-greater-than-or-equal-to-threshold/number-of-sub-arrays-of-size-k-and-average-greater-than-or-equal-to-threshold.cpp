class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0,count=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum/k>=threshold) count++;
        int i=0;
        int j=k-1;
        while(j<n-1){
            j++;
            sum-=arr[i];
            sum+=arr[j];
            i++;
            if(sum/k>=threshold)  count++;
        }
        return count;
    }
};