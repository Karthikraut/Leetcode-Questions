class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.length(),m=s2.length();
        if(n!=m) return false;
        int noOfMismatch =0;
        int fst=-1,snd=-1;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]) noOfMismatch++;
            if(fst!=-1 && s1[i]!=s2[i]){
                snd=i;
            }
            else if(s1[i]!=s2[i]){
                fst=i;
            }
        }
        cout<<" first: "<<fst<<" scnd: "<<snd<<" ";
        cout<<" 2 ";
        if(noOfMismatch>2) return false;
        cout<<" 1 ";
        if((fst!=-1 && snd!=-1) && (s1[fst]!=s2[snd] || s1[snd]!=s2[fst])) return false;
        cout<<" 3 ";
        if(fst!=-1 && snd==-1) return s1[fst]==s2[fst];
        return true;
    }
};