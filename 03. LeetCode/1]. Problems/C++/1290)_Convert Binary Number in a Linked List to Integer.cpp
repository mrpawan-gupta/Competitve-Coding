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
    ListNode *rev(ListNode *head)
    {
        ListNode *temp = NULL;
        while (head)
        {
            auto holder = head->next;
            head->next = temp;
            temp = head;
            head = holder;
        }
        return temp;
    }

    int getDecimalValue(ListNode *head)
    {
        auto node = rev(head);
        int power = 0, ans = 0;
        while (node)
        {
            if (node->val)
            {
                ans += pow(2, power);
            }
            power++;
            node = node->next;
        }
        return ans;
    }
};