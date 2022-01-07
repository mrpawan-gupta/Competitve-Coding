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
        if (!head)
            return nullptr;
        else if (!head->next)
            return head;
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = head;
        while (curr)
        {
            next = next->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};