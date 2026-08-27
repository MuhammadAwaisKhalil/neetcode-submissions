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
    TreeNode* inorderSuccessor(TreeNode* root){
        while(root->left!=NULL){
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }

        if(key<root->val){
            root->left=deleteNode(root->left, key);
        }
        else if(key>root->val){
            root->right=deleteNode(root->right, key);
        }
        else{
            if(!root->left){
                TreeNode* cur=root->right;
                delete root;
                return cur;
            }
            if(!root->right){
                TreeNode* cur=root->left;
                delete root;
                return cur;
            }

            TreeNode* repNode=inorderSuccessor(root->right);
            root->val=repNode->val;

            root->right=deleteNode(root->right,repNode->val);

            

        }
        return root;
    }
};