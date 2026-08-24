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
    bool checkSum(TreeNode* root, int currSum, int target){
        if(root==nullptr)
        return false;

        currSum=currSum+root->val;
        if(root->left==nullptr&&root->right==nullptr){
            return currSum==target;
        }

        bool checkLeft = checkSum(root->left,currSum, target);
        bool checkRight = checkSum(root->right,currSum, target);

        return checkLeft||checkRight;

        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return checkSum(root, 0, targetSum);
    }
};