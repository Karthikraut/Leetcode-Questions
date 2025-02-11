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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small =new ListNode(-1);
        ListNode* great = new ListNode(-1);
        ListNode* smallP= small;
        ListNode* gretP =great;
        ListNode* temp =head;
        while(temp){
            if(temp->val<x){
                smallP->next =temp;
                smallP =smallP->next;
            }
            else{
                gretP->next= temp;
                gretP =gretP->next;
            }
            temp=temp->next;
        }
        gretP->next = nullptr;
        smallP->next =great->next;
        return small->next;
    }
};