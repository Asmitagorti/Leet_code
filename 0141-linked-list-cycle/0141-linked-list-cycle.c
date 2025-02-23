/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // you can count and check the number of loops, and if its crosses 10000, 1e4, then there is some sort of loop there, and then print true
 // else print false
 // this forces us to iterate 10^4 every time..
 // so, optimatl method is to use 2 pointers
bool hasCycle(struct ListNode *head) {
    if(head==NULL || head->next==NULL) return false;
    struct ListNode *slow=head; // pointer 1
    struct ListNode *fast=head->next; // pointer 2
    while(fast!=NULL && fast->next!=NULL){
        if(slow==fast) return true; // fast and slow meet when there's a cycle present
        slow=slow->next; // moving slow 1 step ahead
        fast=fast->next->next; // moving fast 2 steps ahead
    }
    return false; // if fast is null, or fast-> value is null, it means the pointer fast reached out of bounds, or it reached the end of the list, meaning that there is NO CYCLE
}