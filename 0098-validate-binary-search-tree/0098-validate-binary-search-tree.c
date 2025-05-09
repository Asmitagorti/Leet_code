/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool check(struct TreeNode* root, long long min, long long max){
    if(root==NULL) return true;
    // i need to recursively check if
    // all root->left elements, are smaller than root
    // and all root->right elements, are greater than root
    if(root->val>=max || root->val<=min) return false;
    return check(root->left,min,root->val) && check(root->right,root->val,max);
}
bool isValidBST(struct TreeNode* root) {
    return check(root, LONG_MIN ,LONG_MAX);
    
}