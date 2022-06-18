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
    int getLength(ListNode* head){
        int cnt = 0; 
        while(head != NULL){
            head = head->next;
            cnt++; 
        }
        return cnt; 
    }
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL; 
        while(head != NULL){
            ListNode* next_node = head->next; 
            head->next = prev;
            
            prev = head; 
            head = next_node; 
        }
        return prev; 
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1 = getLength(l1); 
        int len2 = getLength(l2); 
        if(len1 < len2){
            swap(l1,l2);
            swap(len1, len2);
        }
        ListNode* curr = new ListNode(0); 
        while(len1 > len2){
            ListNode* temp = new ListNode(l1->val, curr); 
            curr = temp; 
            l1 = l1->next; 
            len1--; 
        }
        
        while(len1--){
            ListNode* temp = new ListNode(l1->val + l2->val, curr); 
            curr = temp; 
            l1 = l1->next; 
            l2 = l2->next; 
        }
        ListNode* ans = curr; 
        int carry = 0; 
        while(curr != NULL){
            int sum = carry + curr->val; 
            curr->val = sum % 10; 
            carry = sum / 10; 
            curr = curr->next; 
        }

        ListNode* headSum = reverseList(ans); 
        
        return (headSum->val != 0)? headSum : headSum->next; 
    }
};