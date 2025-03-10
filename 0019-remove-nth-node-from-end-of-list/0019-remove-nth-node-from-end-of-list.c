/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int Length_List(struct ListNode* head){
    int length=0;
    while(head!=NULL){
        length++;
        head=head->next;
    }
    return length; // we find the lenght of the list
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int  len=Length_List(head);
    struct ListNode* temp=head;
    for(int i=1;i<len-n;++i){ // we place temp at a position before the node 
    //we need to remove
        temp=temp->next;
    }
    if(len==n){
        struct ListNode* new=head->next; // if the node we want to remove is the head
        return new;
    }
    temp->next=temp->next->next; // make new links, leaving the deleted node behind
    return head;
}