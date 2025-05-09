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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp =dummy;
        while(list1 || list2){
            if(list1 && list2 && list1->val<list2->val){
                temp->next = list1;
                list1=list1->next;
                temp=temp->next;
            }
            else if(list1 && list2 && list1->val>=list2->val){
                temp->next =list2;
                temp=temp->next;
                list2=list2->next;
            }
            if(!list1 && list2){
                temp->next=list2;
                break;
            }
            if(!list2 && list1){
                temp->next =list1;
                break;
            }
        }
        return dummy->next;
    }
};