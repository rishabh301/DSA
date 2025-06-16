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
    ListNode *detectCycle(ListNode *head) {
        ListNode* t = head;
        map<ListNode*,int> mymap;
        while(t!=nullptr)
        {
            if(mymap[t]==0)
            {
                mymap[t]=1;
            }
            else
            {
                //cout<<"dog"<<endl;
                return t;
            }

            t=t->next;
        }
        return nullptr;
    }
};