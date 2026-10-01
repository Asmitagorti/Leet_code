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
    void reorderList(ListNode* head) {
        ListNode* st=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // cout<<slow->val;
        // st -> slow, is the first part of the linked list, linked forward
        // we gotta reverse slow->next to list ending
        ListNode* cur=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* post=NULL;
        while(cur!=NULL){
            post=cur->next;
            cur->next=prev;
            prev=cur;
            cur=post;
        }
        ListNode* ls=prev;
        int ct=1;
        // cout<<ls->val;
        while(st!=NULL && ls!=NULL){
            // cout<<st->val<<endl;
            ListNode* hey=st->next;
            ListNode* boi=ls->next;
            if(ct%2==1) {
                st->next=ls;
                st=hey;
            }
            else {
                ls->next=st;
                ls=boi;
            }
            ct++;
            // cout<<st->val<<" ";
        }
    }
};