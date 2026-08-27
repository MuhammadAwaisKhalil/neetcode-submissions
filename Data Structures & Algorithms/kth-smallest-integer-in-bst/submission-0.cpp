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
    int result=-1;
    int count=0;

    void findSmall(TreeNode* root, int k){
        if(!root||result!=-1){
            return;
        }

        findSmall(root->left, k);
        count++;
        if(count==k){
            result=root->val;
            return;
        }
        findSmall(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        findSmall(root, k);
        return result;
    }
};
