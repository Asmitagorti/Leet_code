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
    bool isPalindrome(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* post=head;
        string s1,s2;
        while(cur!=NULL){
            s1+=cur->val;
            post=cur->next;
            cur->next=prev;
            prev=cur;
            cur=post;
        }
        // prev is the head of the reversed linked list
        while(prev!=NULL){
            s2+=prev->val;
            prev=prev->next;
        }
        return (s1==s2);
    }
};