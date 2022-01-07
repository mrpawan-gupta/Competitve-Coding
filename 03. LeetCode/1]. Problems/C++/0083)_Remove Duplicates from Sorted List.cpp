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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast)
        {
            if (slow->val == fast->val)
            {
                slow->next = fast->next;
                delete fast;
            }
            else
                slow = slow->next;
            if (fast)
                fast = slow->next;
        }

        return head;
    }
};