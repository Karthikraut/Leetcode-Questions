class Solution {
public:
    int toBinary(string a){
        int ans =0;
        int n =a.length();
        for(int i=0;i<a.length();i++){
            if(a[i]!='0'){
                ans += 1<<(n-i-1);
            }
        }
        return ans;
    }
    int getDecimalValue(ListNode* head) {
        string val ="";
        while(head!=NULL){
            val += to_string(head->val);
            head=head->next;
        }
        //
        return toBinary(val);
    }
};