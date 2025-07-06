class Solution {
public:
struct cmp{
    bool operator()(int a,int b){
        return a > b;// descending order
    }
};
    int maximumSwap(int num) {
        string nums =to_string(num);
        string sor = nums;
        sort(sor.begin(),sor.end(),cmp());
        int n =nums.length();
        int idx =-1;
        char swapNum;
        for(int i=0;i<n;i++){
            if(sor[i]!=nums[i]){
                idx =i;
                swapNum =nums[i];
                nums[i] = sor[i];
                break;
            }
        }

        if(idx==-1) return num;
        for(int i=n-1;i>=0;i--){
            if(nums[i] == nums[idx] ){
                nums[i] =swapNum;
                break;
            }
        }
        return stoi(nums);
    }
};