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
    ListNode *mergeKLists(vector<ListNode *> &lists){
        ListNode *temp, *prev, *start = NULL;
        int i, j, n, count = 0;
        n = lists.size();

        if (n == 0)
            return NULL;
        multimap<int, ListNode *> mp;

        for (auto it = lists.begin(); it != lists.end(); it++)
        {
            temp = *it;
            if (temp == NULL)
                continue;
            j = temp->val;
            mp.insert(pair<int, ListNode *>(j, temp));
        }
        while (!mp.empty())
        {
            auto it = mp.begin();
            if (count == 0)
            {
                prev = it->second;
                start = prev;
            }
            else
            {
                prev->next = it->second;
                prev = prev->next;
            }
            count++;
            if (it->second->next)
                mp.insert(pair<int, ListNode *>(it->second->next->val, it->second->next));
            mp.erase(it);
        }
        return start;
    }
};