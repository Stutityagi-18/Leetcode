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
    ListNode* revll(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* newhead=revll(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next->next!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=revll(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=NULL)
        {
            if(first->val!=second->val)
            {
                revll(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        revll(newhead);
        return true;
        // ListNode* temp=head;
        // stack<int>st;
        // while(temp!=NULL)
        // {
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL){
        //     if(temp->val!=st.top())
        //     {
        //         return false;
        //     }
        //     st.pop();
        //     temp=temp->next;


        // }
        // return true;///brute force T.C(2*n....because we are traversing list two times)
        // S.C(O(n) we are using stack)

        

    }
};