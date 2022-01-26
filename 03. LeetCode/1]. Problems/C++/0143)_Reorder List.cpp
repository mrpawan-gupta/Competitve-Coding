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
    
    ListNode *reverseList(ListNode *head){
        ListNode *prev = NULL, *curr = head, *n;
        while(curr){
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(!head || !head->next)    return;
        ListNode *slow = head, *fast = head, *prev = NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=NULL){
            slow = slow->next;
            prev = prev->next;
        }
        prev->next = NULL;
        ListNode *reversedHalf = reverseList(slow), *temp = head;
        while(reversedHalf){
            ListNode *nextTemp = temp->next, *nexReverse = reversedHalf->next;
            temp->next = reversedHalf;
            reversedHalf->next = nextTemp;
            temp = nextTemp;
            reversedHalf = nexReverse;
        }
    }
};