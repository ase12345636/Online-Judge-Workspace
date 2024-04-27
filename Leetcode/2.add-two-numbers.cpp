/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum_temp=0,carry=0;
        ListNode* ans= new ListNode();
        ListNode* ans_temp = ans;
        while(1)
        {
            if (l1 == nullptr && l2 == nullptr && carry == 0)
                break;
            else if (l1 == nullptr && l2 == nullptr && carry != 0)
                sum_temp=carry;
            else if(l1==nullptr)
            {
                sum_temp= l2->val + carry;
                l2=l2->next;
            }
            else if (l2==nullptr)
            {
                sum_temp= l1->val + carry;
                l1=l1->next;
            }
            else
            {
                sum_temp= l1->val + l2->val + carry;
                l1=l1->next;
                l2=l2->next;
            }
            carry=0;
            if(sum_temp >= 10)
            {
                carry = sum_temp/10;
                sum_temp %= 10;
            }
            ListNode* push_temp = new ListNode (sum_temp);
            ans_temp -> next = push_temp;
            ans_temp = push_temp;
        }
        return ans->next;
    }
};
// @lc code=end
