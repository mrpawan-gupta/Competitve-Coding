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
    ListNode *reverseKGroup(ListNode *head, int k){
        if (!head || !head->next)
            return head;

        int count = 0;

        ListNode *cur = head;
        while (++count < k && cur) {
            cur = cur->next;
        }
        if (count < k || !cur)
            return head;
        ListNode *prev = reverseKGroup(cur->next, k);

        cur->next = nullptr;
        cur = head;
        while (cur){
            ListNode *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        return prev;
    }
};