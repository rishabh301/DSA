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
    bool isPalindrome(ListNode* head) {
        ListNode* t = head;
        ListNode* n = nullptr;

        while(t!=nullptr)
        {
            ListNode* node = new ListNode;
            node->val = t->val;

            if(n==nullptr)
            {
                node->next = nullptr;
                n = node;
            }
            else
            {
                node->next = n;
                n = node;
            }
            t=t->next;
        }

        t=head;
        while(t!=nullptr)
        {
            if(t->val!=n->val)
            {
                return false;
            }
            t=t->next;
            n=n->next;
        }
        return true;
    }
};