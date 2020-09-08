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
    TreeNode *maxLeft(TreeNode* root) {
        return 0;
    }
    
    TreeNode *minRight(TreeNode* root) {
        return 0;    
    }
    
public:
    bool isValidBST(TreeNode* root) {
        if (root==0) return true;
        auto val = root->val;
        auto l = maxLeft(root->left);
        auto r = minRight(root->right);        
        return isValidBST(root->left) && isValidBST(root->right);
    }
};