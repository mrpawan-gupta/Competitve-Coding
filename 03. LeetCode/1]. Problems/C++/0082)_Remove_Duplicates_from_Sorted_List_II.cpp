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
class Solution{
public:
    ListNode *deleteDuplicates(ListNode *head){
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *curr = head;
        ListNode *temp = new ListNode(0);
        temp->next = head;
        head = temp;
        curr = temp->next;
        ListNode *prev = temp;
        while (curr != NULL) {
            if (curr->next != NULL && curr->next->val == curr->val) {
                while (curr->next != NULL && curr->next->val == curr->val){
                    curr->next = curr->next->next;
                }
                prev->next = curr->next;
                curr = prev->next;
                continue;
            }
            prev = curr;
            curr = curr->next;
        }
        return head->next;
    }
};