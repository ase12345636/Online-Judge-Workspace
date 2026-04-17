/*
 * @lc app=leetcode id=226 lang=cpp
 *
 * [226] Invert Binary Tree
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
class Solution
{
public:
    void DFS(TreeNode *orgin, TreeNode &invert)
    {
        if (orgin == nullptr)
            return;
        invert->right = orgin->left;
        orgin
        DFS()
            invert -> left = orgin->right;
    }
    TreeNode *invertTree(TreeNode *root)
    {
        TreeNode *answer = new TreeNode(root->val);
        DFS(root, answer)
        return answer;
    }
};
// @lc code=end
