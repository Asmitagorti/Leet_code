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
struct BT{
    int diameter;
    int height;
};
class Solution {
public:
    BT dfs(TreeNode* root){
        if(root==NULL) return BT{0,0};
        BT left= dfs(root->left);
        BT right = dfs(root->right);
        int h = 1 + max(left.height, right.height);
        int d = max({left.diameter, right.diameter, left.height + right.height});
        return BT{d,h};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // usually u can find the diameter, by the sum of left height and right height
        // but the diameter of tree, doesnt need to cotnain the root
        // This path may or may not pass through the root.
        // hence we find out the left height and right height for each node, and also 
        // calculate their left and right diameter
        // diameter -> left h + right h
        // height -> max(left h + right h) + 1
        // hence, at the leaf node , we need to return both the left h and right h

        // hence we create a struct, that stores both
        
        return dfs(root).diameter;



    }
};