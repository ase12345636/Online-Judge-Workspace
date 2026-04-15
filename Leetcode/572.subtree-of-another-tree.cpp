/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
    bool isSametree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
            return true;
        if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
        {
            return false;
        }
        else if ((p != nullptr && q != nullptr) && (p->val != q->val))
        {
            return false;
        }
        return isSametree(p->left, q->left) && isSametree(p->right, q->right);
    }
    bool checker(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr)
            return false;
        if (isSametree(root, subRoot))
            return true;
        return checker(root->left, subRoot) || checker(root->right, subRoot);
    }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        bool answer = true;
        return checker(root, subRoot);
    }
};
// @lc code=end
