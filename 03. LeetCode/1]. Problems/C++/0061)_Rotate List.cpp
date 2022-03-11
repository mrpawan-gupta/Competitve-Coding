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
    ListNode *rotateRight(ListNode *head, int k){
        if (head == NULL || head->next == NULL)
            return head;
        int n = 1;
        ListNode *curr = head;

        while (curr->next != NULL){
            n++;
            curr = curr->next;
        }

        if (k > n)
            k = k % n;
        if (k == n || k == 0)
            return head;

        ListNode *temp = head;

        for (int i = 0; i < n - k - 1; i++){
            temp = temp->next;
        }

        ListNode *Newhead = temp->next;

        temp->next = NULL;
        curr->next = head;
        
        return Newhead;
    }
};