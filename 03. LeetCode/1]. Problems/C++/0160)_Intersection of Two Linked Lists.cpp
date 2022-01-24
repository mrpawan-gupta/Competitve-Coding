/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        int lengA = 0, lengB = 0;
        ListNode *la = headA, *lb = headB;
        while (la != nullptr){
            lengA++;
            la = la->next;
        }
        while (lb != nullptr){
            lengB++;
            lb = lb->next;
        }
        if (lengA > lengB){
            while (lengA != lengB){
                headA = headA->next;
                lengA--;
            }
        }
        else if (lengB > lengA){
            while (lengB != lengA)
            {
                headB = headB->next;
                lengB--;
            }
        }
        while (headA != nullptr && headB != nullptr){
            if (headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};