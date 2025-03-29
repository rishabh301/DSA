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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* final=nullptr;
        vector<int> num;

        for(int i=0;i<lists.size();i++)
        {
            ListNode* n = lists[i];
            while(n!=nullptr)
            {
                num.push_back(n->val);
                n=n->next;
            }
        }
        sort(num.begin(),num.end());

        ListNode* t = nullptr;
        ListNode* pointer = nullptr;

        for(int i=0;i<num.size();i++)
        {
            if(t==nullptr)
            {
                ListNode* item = new ListNode(num[i]);
                t = item;
                pointer = t;
            }
            else
            {
                ListNode* item = new ListNode(num[i]);
                pointer->next = item;
                pointer=pointer->next;
            }
        }
        return t;
    }
};