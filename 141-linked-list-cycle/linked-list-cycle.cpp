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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mymap;

        ListNode* t = head;
        while(t!=nullptr)
        {
            if(mymap[t]==0)
            {
                mymap[t]=1;
            }
            else
            {
                return true;
            }
            t=t->next;
        }
        return false;
    }
};