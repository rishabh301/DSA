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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* t = head;
        ListNode* first = nullptr;
        ListNode* firstptr = nullptr;
        ListNode* second = nullptr;
        ListNode* secondptr = nullptr;

        int index = 1;
        while(t!=nullptr)
        {
            ListNode* node = new ListNode;
            node->val = t->val;
            if(index%2==0)
            {
                if(second==nullptr)
                {
                    second = node;
                    node->next = nullptr;
                    secondptr = second;   
                }
                else
                {
                    node->next = nullptr;
                    secondptr->next = node;
                    secondptr = secondptr->next;
                }
            }
            else
            {
                if(first==nullptr)
                {
                    first = node;
                    node->next = nullptr;
                    firstptr = first;
                }
                else
                {
                    node->next = nullptr;
                    firstptr->next = node;
                    firstptr = firstptr->next;
                }
            }
            t=t->next;
            index++;
        }
        if(first==nullptr)
        {
            return nullptr;
        }
        firstptr->next = second;
        return first;

    }
};