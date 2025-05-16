/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

struct Node* connect(struct Node* root) {
    if(root==NULL) return NULL;
	struct Node* head=root;
    while(head->left){
        struct Node* temp=head;
        while(temp){ // need to connect left to right
            temp->left->next=temp->right;
            if(temp->next){ // not null
                temp->right->next=temp->next->left;
            }
            // if it null, its automatically set to null 
            // no need to reassign it to null
            temp=temp->next;
        }
        head=head->left;
    }
    return root;
}