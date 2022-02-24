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
    ListNode *mergelist(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        if (list1->val < list2->val)
        {
            list1->next = mergelist(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergelist(list1, list2->next);
            return list2;
        }
    }

    ListNode *sortList(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *fast = head->next->next, *slow = head;

        while (fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *r = sortList(slow->next);
        slow->next = nullptr;
        ListNode *l = sortList(head);
        return mergelist(l, r);
    }
};