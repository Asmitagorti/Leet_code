/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if(root==NULL) return NULL;
    if(root->val==val) return root;
    else if(root->val>val){
        struct TreeNode* temp=searchBST(root->left,val);
        return temp;
    }
    else {
        struct TreeNode* temp=searchBST(root->right,val);
        return temp;
    }
    return NULL;
}