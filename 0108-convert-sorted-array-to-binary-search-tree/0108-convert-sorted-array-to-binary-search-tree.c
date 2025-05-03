/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// struct TreeNode* root;
struct TreeNode* create(int val){
    struct TreeNode* temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val=val;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
struct TreeNode* puppy(int* nums, int left, int right) {
    if (left > right) return NULL;
    int mid = (left + right) / 2;
    struct TreeNode* node = create(nums[mid]);
    node->left  = puppy(nums, left, mid-1);
    node->right = puppy(nums, mid + 1, right);
    return node;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return puppy(nums,0,numsSize-1);
}