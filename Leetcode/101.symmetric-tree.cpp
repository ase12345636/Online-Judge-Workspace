/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetric(TreeNode* root) {
        return helper (root -> left, root -> right);
    }
    bool helper(TreeNode* node1, TreeNode* node2)
    {
        if (node1 == nullptr && node2 == nullptr)
            return true;
        else if (node1 == nullptr && node2 != nullptr)
            return false;
        else if (node1 != nullptr && node2 == nullptr)
            return false;
        return node1 -> val == node2 -> val && helper(node1 -> right, node2 -> left) && helper (node1 -> left, node2 -> right);
    }
};
// @lc code=end

