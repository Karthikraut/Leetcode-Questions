class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        int m =arr1.size(), n=arr2.size();
        for(int i=0;i<m;i++){
            mp[arr1[i]]++;
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            int sz =mp[arr2[i]]; 
            for(int j=0;j<sz;j++){
                ans.push_back(arr2[i]);
            }
            mp[arr2[i]] =-1;
        }
        vector<int> v;
        for(auto ele:mp){
            if(ele.second!=-1){
                for(int j=0;j<ele.second;j++){
                    v.push_back(ele.first);
                }
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};