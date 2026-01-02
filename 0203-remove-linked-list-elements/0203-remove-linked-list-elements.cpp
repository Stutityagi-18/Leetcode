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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* cur=head;
        ListNode* prev=dummy;
        
        while(cur!=NULL)
        {
            if(cur->val==val)
            {
                prev->next=cur->next;
                delete(cur);
                 cur=prev->next;
            }
            else
            {
                prev=cur;
                cur=cur->next;
            }
           
        }
        ListNode* res=dummy->next;
        delete dummy;
        return res;
        
    }
};