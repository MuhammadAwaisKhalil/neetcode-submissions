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
private:
    void recursive(TreeNode* currNode, vector<int>& ans){
        if(currNode==NULL){
            return;
        }

        recursive(currNode->left, ans);
        ans.push_back(currNode->val);
        recursive(currNode->right, ans);
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recursive(root,ans);
        return ans;
    }
};