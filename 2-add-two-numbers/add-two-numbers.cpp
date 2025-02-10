/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 =l1;
        ListNode* temp2=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* ans =dummy;
        int carry=0;
        int val1=0,val2=0;
        while(temp1 || temp2){
            val1 =temp1? temp1->val:0;
            val2 =temp2? temp2->val:0;
            int result = val1 +val2+carry;
            carry =result/10;
            result= result%10;
            ans->next = new ListNode(result);
            ans=ans->next;
            if(temp1) temp1 =temp1->next;
            if(temp2) temp2=temp2->next;
        }
          // Handle remaining carry
        if (carry > 0) {
            ans->next = new ListNode(carry);
        }
        return dummy->next;
    }
};