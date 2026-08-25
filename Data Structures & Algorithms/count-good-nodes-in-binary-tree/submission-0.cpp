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
int countGood=0;
    void helper(TreeNode* root, int curMax){
        if(root==nullptr){
            return;
        }
        curMax=max(root->val,curMax);

        if(root->val>=curMax){
            countGood++;
        }

        helper(root->left, curMax);
        helper(root->right, curMax);
    }
    int goodNodes(TreeNode* root) {
        helper(root, root->val);

        return countGood;
    }
};
