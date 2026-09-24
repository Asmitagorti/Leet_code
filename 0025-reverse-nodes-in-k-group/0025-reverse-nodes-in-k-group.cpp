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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int ct=1;
        if(k==1) return head;
        ListNode* cur = head->next;
        ListNode* prev=head;
        ListNode* con=head;
        ListNode* st=head;
        ListNode* post=NULL;
        ListNode* ans=NULL;
        int len=0,pos=1;
        while(st!=NULL){
            len++;
            st=st->next;
        }
        st=head;
        bool flag=false;
        while(cur!=NULL){
            ct++;
            pos++;
            post=cur->next;
            cur->next=prev;
            prev=cur;
            cur=post;
            if(ct==k){
                if(!flag) {
                    ans=prev;
                    flag=true;
                }
                else {
                    con->next=prev;
                }
                con=st;
                st=cur;
                if(cur!=NULL && len-pos>=k){
                    st=cur;
                    prev=cur;
                    cur=cur->next;
                    pos++;
                    ct=1;
                }
                else{
                    break;
                }
            }
        }
        con->next=st;
        return ans;
    }
};