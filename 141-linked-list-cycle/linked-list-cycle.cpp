/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        ListNode* slow =head;
        ListNode* fast =head;
        while(fast && slow){
            slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
            if(!fast) break;
            if(slow==fast->next) return true;
        }
        return false;
    }
};