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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size =0;
        ListNode* temp =head;
        while(temp){
            size++;
            temp =temp->next;
        }
        if(size==1 && n==1) return NULL;
        if(size==n) return head->next;
    
        int idx = size-n; //3
        temp =head;
        ListNode* prev =new ListNode(-1);
        while(temp){
            if(idx==0){
                prev->next =temp->next;
            }
            idx--;
            prev =temp;
            temp=temp->next;
        }
        return head;
    }
};