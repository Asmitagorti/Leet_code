/** * Definition for a binary tree node. * struct TreeNode { * int val; * struct
 * TreeNode *left; * struct TreeNode *right; * }; */
struct info {
    int depth;
    struct TreeNode* parent;
};
void find(struct TreeNode* root, int res, int ct, struct TreeNode* parent,
          struct info* result) {
    if (root == NULL)
        return;
    if (root->val == res) {
        result->depth = ct;
        result->parent = parent;
        return;
    }
    find(root->left, res, ct + 1, root, result);
    if (result->parent != NULL)
        return;
    find(root->right, res, ct + 1, root, result);
}
bool isCousins(struct TreeNode* root, int x,
               int y) { // they shouldnt have the same parent... // traverse
    // thru root->left // traverse thru root->right
    struct info xInfo = {0, NULL};
    struct info yInfo = {0, NULL};
    int ct = 0;
    find(root, x, 0, NULL, &xInfo);
    find(root, y, 0, NULL, &yInfo);
    return (xInfo.depth == yInfo.depth) && (xInfo.parent != yInfo.parent);
}