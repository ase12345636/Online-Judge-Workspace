/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* ans_temp = ans;
        ListNode* push_temp;
        while(1)
        {
            if(list1==nullptr && list2==nullptr)
                break;
            else if (list1==nullptr)
            {
                ans_temp -> next = new ListNode(list2->val);
                list2 = list2 -> next;
            }
            else if (list2==nullptr)
            {
                ans_temp -> next = new ListNode(list1->val);
                list1 = list1 -> next;
            }
            else
            {
                if(list1 -> val <= list2 ->val)
                {
                    ans_temp -> next = new ListNode(list1->val);
                    list1 = list1 -> next;
                }
                else
                {
                    ans_temp -> next = new ListNode(list2->val);
                    list2 = list2 -> next;
                }
            }
            ans_temp = ans_temp -> next;
        }
        return ans->next;
    }
};
// @lc code=end

