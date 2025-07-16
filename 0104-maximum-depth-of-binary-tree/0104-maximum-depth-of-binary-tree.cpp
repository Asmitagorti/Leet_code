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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>Q;
        int ct=0;
        Q.push(root);
    
        while(!Q.empty()){
            int len=Q.size();
            
            // delete from front
            for(int i=0;i<len;++i){
                TreeNode* node=Q.front(); // add from front
                Q.pop(); // q.empty(), size ->1 
                if(node->left!=NULL ) Q.push(node->left);
                if(node->right!=NULL ) Q.push(node->right);
            }
            ct++;
        }
        return ct;
    }
};
