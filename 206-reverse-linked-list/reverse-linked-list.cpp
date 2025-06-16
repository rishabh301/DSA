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
    ListNode* reverseList(ListNode* head) {
        ListNode* t = head;
        ListNode* n = nullptr;
        while(t!=nullptr)
        {
            ListNode* node = new ListNode;
            node->val = t->val;
            if(n==nullptr)
            {
                n = node;
                node->next = nullptr;
            }
            else
            {
                node->next = n;
                n = node;
            }
            t=t->next;
        }
        return n;
    }
};