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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        return solve(l1, l2, 0);
    }
    ListNode *solve(ListNode *l1, ListNode *l2, int c)
    {
        if (l1 == NULL && l2 == NULL)
        {
            if (c)
                return new ListNode(c);
            return l1;
        }
        if (l1 == NULL)
        {
            l2->val += c;
            l2->next = solve(NULL, l2->next, l2->val / 10);
            l2->val %= 10;
            return l2;
        }
        if (l2 == NULL)
        {
            l1->val += c;
            l1->next = solve(l1->next, NULL, l1->val / 10);
            l1->val %= 10;
            return l1;
        }
        l1->val += (l2->val + c);
        l1->next = solve(l1->next, l2->next, l1->val / 10);
        l1->val %= 10;
        return l1;
    }
};