/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */

// @lc code=start
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
    bool ans = true;
    int depth(TreeNode* root)
    {
        if (root == NULL || !ans)
            return 0;
        int left = depth(root -> left);
        int right = depth(root -> right);
        if(abs(left - right) > 1)
        {
            ans = false;
            return 0;
        }
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        depth(root);
        return ans;
    }
};
// @lc code=end

