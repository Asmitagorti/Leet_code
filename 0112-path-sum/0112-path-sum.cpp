/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // here, we're not supposed to add all the values from root-leaf
    // we're supposed to find the best path, to get the targetSum
    // so we start with targetSum, and subtract the node values
    // if we get 0, then yay, otherwise, nope.
    // we find a better path
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root->right==NULL && root->left==NULL){
            return (targetSum==root->val);
        }
        return hasPathSum(root->left, targetSum-(root->val)) || hasPathSum(root->right, targetSum-(root->val));
        // return (res==targetSum);
    }
};