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
    ListNode* middleNode(ListNode* head) {
        int num = 0;
        ListNode* t = head;
        while(t!=nullptr)
        {
            num++;
            t=t->next;
        }

        int middle = num/2;
        int i = 0;
        t = head;
        while(t!=nullptr)
        {
            if(i==middle)
            {
                return t;
                break;
            }
            i++;
            t=t->next;
        }
        return t;
    }
};