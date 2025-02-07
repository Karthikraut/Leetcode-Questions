class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        vector<int> pge(n,0);
        pge[0] =-1;
        int maxEle = height[0];
        for(int i=1;i<n;i++){
            pge[i]=maxEle;
            if(maxEle<height[i]) maxEle =height[i];

        }

        vector<int> nge(n,0);
        nge[n-1] =-1;
        maxEle =height[n-1];
        for(int i=n-2;i>=0;i--){
            nge[i] =maxEle;
            if(maxEle<height[i]) maxEle =height[i];
        }

        for(int i=0;i<n;i++){
            nge[i]= min(nge[i],pge[i]);
        }
        
        int trapWater =0;
        for(int i=0;i<n;i++){
            if(nge[i]>height[i]){
                trapWater =trapWater + (nge[i]-height[i]);
            }
        }
        return trapWater;
    }
};