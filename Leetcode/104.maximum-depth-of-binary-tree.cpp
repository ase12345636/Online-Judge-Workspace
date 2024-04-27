/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    int maxDepth(TreeNode* root) {
        int deep = 0;
        DFS (root, deep);
        return deep;
    }
    void DFS(TreeNode* root, int& deep, int counter = 0)
    {
        if (counter > deep)
            deep = counter;
        if (root == nullptr)
            return;
        counter ++;
        DFS(root -> left, deep, counter);
        DFS(root -> right, deep, counter);
    }
};
// @lc code=end

