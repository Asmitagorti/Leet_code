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
// int m;
class Solution {
public:
    int m=INT_MIN;
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return m;
    }
    int dfs(TreeNode *root){
        //   Note that the path does not need to pass through the root.
        // okie dokie
        // so here, a path includes both root->val, left and right
        // amd the return to the parent call, only has the sum of the root->val, and max(left child, right child)
        // for each path, we find the max ( not max for the return call )
        // cuz at the end, when we reach the main root, the return call ( to the parent that doesnt exist)
        // may carry a value lesser than the possible max path sum, in the subtrees below it
        // hence we track the max, of all the subtrees
        // the max can happen at any subtree
        // we are allowed to fork ( or mountain ), that is, take the left child root and the right child-->path
        // we follow postorder here: left, right ad then root
        // cuz HOW YA ON EARTH WILL U GO TO THE ROOT, WITHOUT KNWING THE PATH THE KIDS CARRY!!
        // let's goo, hehe
        
        if(root==NULL) return 0; // base call
        // m=INT_MIN;
        
        // m = max(INT_MIN,m);
        int left=max(dfs(root->left),0); //eliminate -ves
        // cout<<"left is " <<left<<endl;
        int right=max(dfs(root->right),0); //0
        // cout<<"right is "<<right<<endl;
        int local=root->val + left + right; // 1
        cout<<"local is "<<root->val<<"+"<<left<<"+"<<right<<endl;
        cout<<"prev max is "<<m<<endl;
        m = max(m,local);
        cout<<"final max is "<<m<<endl;

        return root->val + max(left, right); // return to parent call
        
    }

    
};