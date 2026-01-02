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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if (!head || !head->next) return;

        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* sec_head=slow->next;
        slow->next=nullptr;
        ListNode* prev=NULL;
        ListNode* cur=sec_head;
        while(cur!=nullptr)
        {
            ListNode* nextnode=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextnode;
        }
        ListNode* second=prev;
        ListNode* first=head;
        while(second!=nullptr)
        {
             ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }

        
    }
};