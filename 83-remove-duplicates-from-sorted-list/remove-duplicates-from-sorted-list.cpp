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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mymap;
        ListNode* t = head;

        ListNode* f = nullptr;
        ListNode* fptr = nullptr;

        while(t!=nullptr)
        {
            if(mymap[t->val]==0)
            {
                ListNode* node = new ListNode;
                node->val = t->val;
                node->next = nullptr;
                mymap[t->val]=1;
                if(f==nullptr)
                {   
                    f = node;
                    fptr = f;
                }
                else
                {
                    fptr->next = node;
                    fptr=fptr->next;
                }
            }
            t=t->next;
        }
        return f;
    }
};