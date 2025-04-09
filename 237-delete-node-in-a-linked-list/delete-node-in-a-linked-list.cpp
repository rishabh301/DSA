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
    void deleteNode(ListNode* node) {
        ListNode* t = node;
        ListNode* parent = nullptr;

        while(t->next!=nullptr)
        {
            t->val=t->next->val;
            parent = t;
            t=t->next;
        }

        delete parent->next;
        parent->next=nullptr;
    
    }
};