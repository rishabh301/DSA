/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> mymap;
        ListNode* t = headA;
        while(t!=nullptr)
        {
            if(mymap[t]==0)
            {
                mymap[t]=1;
            }
            t=t->next;
        }

        ListNode* k = headB;
        while(k!=nullptr)
        {
            if(mymap[k]==1)
            {
                return k;
            }
            k=k->next;
        }
        return nullptr;
    }
};