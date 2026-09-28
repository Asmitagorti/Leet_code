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
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* h1=list1;
        ListNode* h2=list2;
        ListNode* st;
        ListNode* con;
        if(h1->val<=h2->val) {
            st=h1;
            h1=h1->next;
        }
        else {
            st=h2;
            h2=h2->next;
        }
        ListNode* head=st;
        while(h1!=NULL && h2!=NULL){
            if(h1->val<=h2->val) {
                st->next= new ListNode(h1->val);
                h1=h1->next;
            }
            else {
                st->next=new ListNode(h2->val);
                h2=h2->next;
            }
            st=st->next;
        }
        while(h1!=NULL){
            st->next=new ListNode(h1->val);
            h1=h1->next;
            st=st->next;
        }
        while(h2!=NULL){
            st->next=new ListNode(h2->val);
            h2=h2->next;
            st=st->next;
        }
        return head;

    }
};