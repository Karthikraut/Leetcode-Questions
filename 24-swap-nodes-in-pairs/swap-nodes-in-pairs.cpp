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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* ans =head->next;
        ListNode* t1=head;
        ListNode* t2 =head->next;
        ListNode* temp;
        while(t1 && t2 ){
            temp =t2->next;
            t2->next =t1;
            
            if(!temp || !temp->next) t1->next =temp;
            else if(temp) t1->next = temp->next;

            t1=temp;
            if(t1) t2=t1->next;
        }
        return ans;
    }
};