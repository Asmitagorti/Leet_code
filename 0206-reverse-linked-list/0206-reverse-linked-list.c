/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *curr=head;
    struct ListNode *prev=NULL, *post=NULL;
    while(curr!=NULL){
        post=curr->next;
        curr->next=prev;
        prev=curr;
        curr=post;
    }
    // once curr becomes null, prev becomes the head of the reversed linked list
    return prev;
}