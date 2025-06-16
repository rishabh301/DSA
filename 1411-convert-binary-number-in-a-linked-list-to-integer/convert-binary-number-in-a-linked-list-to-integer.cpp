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
    int getDecimalValue(ListNode* head) {
        ListNode* t = head;
        int len = 0;
        while(t!=nullptr)
        {
            len++;
            t=t->next;
        }

        t = head;
        int num = 0;

        while(t!=nullptr)
        {
            num+=pow(2,len-1)*(t->val);
            t=t->next;
            len--;
        }

        return num;
    }
};