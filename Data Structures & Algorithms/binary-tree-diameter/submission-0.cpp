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

    int maxDiameter=0;
public:
    int checkMax(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=checkMax(root->left);
        int rh=checkMax(root->right);

        maxDiameter=max(maxDiameter,lh+rh);

        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        checkMax(root);
        return maxDiameter;
        
    }
};
