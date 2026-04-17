/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;

        ListNode *now = head;
        ListNode *answer = new ListNode;
        vector<ListNode *> list;
        while (now != nullptr)
        {
            list.push_back(now);
            now = now->next;
        }
        now = answer;
        for (int i = list.size() - 1; i >= 0; i--)
        {
            now->val = list[i]->val;
            if (i != 0)
            {
                now->next = new ListNode;
                now = now->next;
            }
            else
                now->next = nullptr;
        }
        return answer;
    }
};
// @lc code=end
