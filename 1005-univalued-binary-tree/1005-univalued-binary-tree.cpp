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
    bool puppy(TreeNode* root, int check){
        if(root==NULL) return true;
        if(root->val!=check) return false;
        return puppy(root->left, check) && puppy(root->right, check);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        return puppy(root,root->val);
    }
};