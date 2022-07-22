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
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp=head,*cur=head;
        while(cur){
            if(cur->val<x){
                ListNode* a=temp;
                while(a!=cur){
                    swap(a->val,cur->val);
                    a=a->next;
                }
            }
            if(temp->val<x)temp=temp->next;
            cur=cur->next;
        }
        
        return head;
    }
};