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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *prev = NULL, *cur = head;
        int i = 1;
        while (i < left) {
            prev = cur;
            cur = cur->next;
            i++;
        }
        ListNode* leftNode = prev;
        prev = cur;
        cur = cur->next;
        ListNode* firstNode = prev;
        while(i < right) {
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
            i++;
        }
        firstNode-> next = cur;
        if(leftNode) leftNode->next = prev;
        else head = prev;
        return head;
    }
};