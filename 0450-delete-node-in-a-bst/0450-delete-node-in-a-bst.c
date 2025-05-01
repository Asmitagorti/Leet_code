/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* Findmin(struct TreeNode* root){
	//you have to find the smallest value here
	while(root!=NULL && root->left!=NULL){
		root=root->left; // traversing
	}
	return root;
}
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root==NULL){
		return NULL; // nthg to delete
	}
	if(root->val>key){
		root->left=deleteNode(root->left,key); // recursion call!!
	}
	else if(root->val<key){
		root->right=deleteNode(root->right,key);
	}
	else{ // root->data==val
		// you've three cases
		// 1) you delete the leaf node
		// 2) you've one child
		// 3) you've two children
		
		// 1) you delete the leaf node
		if(root->left==NULL && root->right==NULL){ 
			free(root);
			return NULL; // u've deleted the leaf node, there's no change in the Binary search tree
		}
		// 2) you've one child
		else if(root->left==NULL || root->right==NULL){
			struct TreeNode* temp=NULL;
			if(root->left==NULL){
				temp=root->right;
			}
			else{
				temp=root->left;
			}
			free(root);
			return temp;
		}
		// 3) you've two children
		else{
			// you have to find the smallest value in the right subtree of the root
			// the successor of the node  is the smallest value in the right subtree
			// once you find the smallest, you have to store the smallest value in the node
			// and then u delete the temp node, this happens in the recursive call itself
			struct TreeNode *temp=Findmin(root->right); // searching the right subtree of root
			root->val=temp->val; // assigning the value
			root->right=deleteNode(root->right,temp->val);
		}
	}
	return root;
}