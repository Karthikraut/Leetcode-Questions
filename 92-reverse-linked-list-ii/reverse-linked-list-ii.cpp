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
    ListNode* helper(ListNode* head){
        ListNode* temp =NULL;
        ListNode* prev =head;
        ListNode* curr =head->next;
        while(prev){
            prev->next=temp;
            temp =prev;
            prev =curr;
            if(curr) curr =curr->next;
        }
        return temp;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode *a =NULL;
        ListNode *b =NULL;
        ListNode *c =NULL;
        ListNode *d =NULL;
        ListNode *temp =head;
        int n=1;
        while(temp !=NULL){
            if(n==left-1) a=temp;
            if(n==left) b =temp;
            if(n==right) c=temp;
            if(n==right+1) d=temp;
            temp =temp->next;
            n++;
        }

        if(a!=NULL) a->next =NULL;
        c->next =NULL;
        c = helper(b);
        if(a) a->next =c;
        b->next =d;
        if(a) return head;
        return c;
    }
};