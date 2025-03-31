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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t = l1;
        ListNode* l = l2;
        ListNode* merge = nullptr;
        ListNode* last = nullptr;
        int carry=0;
        bool flag=true;
        while(t!=NULL)
        {
            if(l==nullptr)
            {
                flag=false;
                break;
            }
            else
            {
                ListNode* temp = new ListNode;
                temp->next=nullptr;
                int num = t->val+l->val+carry;
                if(num>=10)
                {
                    carry=1;
                    int mod = num%10;
                    temp->val=mod;
                }
                else
                {
                    carry=0;
                    temp->val = num;
                }
                if(merge==nullptr)
                {
                    merge = temp;
                    last = merge; 
                }
                else
                {
                    last->next = temp;
                    last=last->next;
                }
                t=t->next;
                l=l->next;
            }
        }
        if(flag)
        {
            while(l!=nullptr)
            {
                int num = l->val+carry;
                ListNode* temp = new ListNode;
                temp->next=nullptr;
                if(num>=10)
                {
                    int mod = num%10;
                    carry=1;        
                    temp->val=mod;            
                }
                else
                {
                    carry=0;
                    temp->val=num;
                }
                last->next = temp;
                last=last->next;
                l=l->next;
            }
        }
        else
        {
            while(t!=nullptr)
            {
                int num = t->val+carry;
                ListNode* temp = new ListNode;
                temp->next=nullptr;
                if(num>=10)
                {
                    int mod = num%10;
                    carry=1;        
                    temp->val=mod;            
                }
                else
                {
                    carry=0;
                    temp->val=num;
                }
                last->next = temp;
                last=last->next;
                t=t->next;
            }
        }
        if(carry==1)
        {
            ListNode* temp = new ListNode;
            temp->val=1;
            temp->next=nullptr;
            last->next=temp;
        }
        return merge;
    }
};