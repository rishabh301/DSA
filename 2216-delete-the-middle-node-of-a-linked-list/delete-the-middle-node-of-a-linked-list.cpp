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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* t = head;
        if(head->next==nullptr || head==nullptr)
        {
            return nullptr;
        }
        int length = 0;
        while(t!=nullptr)
        {
            length++;
            t=t->next;
        }

        int index = length/2-1;

    

        t=head;
        int k = 0;
        while(t!=nullptr)
        {
            if(k==index)
            {
                break;
            }
            k++;
            t=t->next;
        }
  
        //cout<<"t is at : "<<t->val<<endl;
        t->next = t->next->next;
        return head;
    }
};