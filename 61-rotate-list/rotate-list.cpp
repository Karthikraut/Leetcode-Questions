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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* fast =head;
        ListNode* slow =head;
        int size=0;
        ListNode* temp =head;

        while(temp){
            size++;
            temp=temp->next;
        }
        if(size==NULL) return head;
        k=k%size;
        
        while(k--){
            fast=fast->next;
        }
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next =head;
        ListNode* newHead =slow->next;
        slow->next=NULL;
        return newHead;
    }
};