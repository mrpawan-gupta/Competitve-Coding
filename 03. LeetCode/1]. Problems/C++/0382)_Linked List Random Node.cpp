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
    // Note : head is guaranteed to be not null, so it contains at least one node.
    ListNode *HeadNode;
    Solution(ListNode *head)
    {
        HeadNode = head;
    }
    // returns value of a random node
    int getRandom()
    {
        int res, len = 1;
        ListNode *x = HeadNode;
        while (x)
        {
            if (rand() % len == 0)
            {
                res = x->val;
            }
            len++;
            x = x->next;
        }
        return res;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */