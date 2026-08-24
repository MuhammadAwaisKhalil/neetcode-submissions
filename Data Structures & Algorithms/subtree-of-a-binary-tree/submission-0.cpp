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
    bool identical(TreeNode* p, TreeNode* q){
        if(p==NULL||q==NULL){
            return p==q;
        }

        bool leftbranch = identical(p->left,q->left);
        bool rightbranch = identical(p->right,q->right);

        return leftbranch&&rightbranch&&p->val==q->val;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL||subRoot==NULL){
            return root==subRoot;
        }

        if(root->val==subRoot->val){
            if(identical(root, subRoot)){
                return true;
            }
        }

        bool leftTree = isSubtree(root->left,subRoot);
        bool rightTree = isSubtree(root->right, subRoot);

        return leftTree||rightTree;
    }
};
