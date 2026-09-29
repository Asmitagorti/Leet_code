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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* st=head;
        ListNode* odd=head;
        if(head==NULL ||head->next==NULL) return head;
        ListNode* even=head->next;
        ListNode* e1=head->next;
        while(even && even->next!=NULL){
            odd->next=even->next;
            odd=even->next;
            even->next=odd->next;
            even=odd->next;
        }
        odd->next=e1;
        return st;
    }
};