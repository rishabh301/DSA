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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        int index = 0;
        while(t!=nullptr)
        {
            index++;
            t=t->next;
        }
        int target = index - n;
        if(target==0)
        {
            head=head->next;
            return head;
        }
        t = head;
     cout<<"t is at : "<<t->val<<endl;
        int k = 1;
        cout<<"k is : "<<k<<endl;
        while(t!=nullptr)
        {
            cout<<"k is : "<<k<<endl;
            if(k==target)
            {
                break;
            }
            k++;
            t=t->next;
        }
       cout<<"k is : "<<k<<endl;
       if(head->next==nullptr || head==nullptr)
       {
            return nullptr;
       }
        ListNode* d = t->next;
        t->next = d->next;
        delete d;
        return head;
    }
};