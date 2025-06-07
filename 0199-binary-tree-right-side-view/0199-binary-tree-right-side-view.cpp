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
    // int height(TreeNode* root){
    //     int ct_1=0,ct_2=0;
    //     while(root->right){
    //         ct_1++;
    //         root=root->right;
    //     }
    //     while(root->left;;){
    //         ct_2++;
    //         root=root->right;
    //     }
    //     return (ct_1>ct_2)?ct_1:ct_2;
    // }
    void dfs(TreeNode* root, int ct, vector<int>&tootsie){
        if(root==nullptr) return;
        if(ct==tootsie.size()) tootsie.push_back(root->val);
        dfs(root->right,ct+1,tootsie);
        dfs(root->left,ct+1,tootsie);
    }
    vector<int> rightSideView(TreeNode* root) {
        // use queues...
        vector<int>tootsie;
        dfs(root,0,tootsie);
        return tootsie;
        // int h=height(root);
        // int ct=0;
        // tootsie.push_back(head->val);
        // // ct+=1;
        // while(head->left){
        //     TreeNode* temp=head;
        //     while(temp){
        //         temp=temp->next;
        //     }
        //     tootsie.push_back(head->val);
        //     head=head->left
        // }
        // return tootsie;



        // head->val=0;
        // while(head->right){
        //     tootsie.push_back(head->right->val);
        //     head->right->val=0;
        //     head=head->right;
            
        // }
        // while(head->left && head->lefet->val!=0){

        // }


    }
};