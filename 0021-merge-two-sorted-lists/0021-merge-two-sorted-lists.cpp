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
// ListNode* catl(vector<int>&arr)
// {
//     int n=arr.size();
//     ListNode* dummy=new ListNode(-1);
//     ListNode* temp=dummy;
//     for(int i=0;i<n;i++)
//     {
//         temp->next= new ListNode(arr[i]);
//         temp=temp->next;

//     }
//     return dummy->next;
// } funtion for brute force approach
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(list1!=nullptr && list2!=nullptr)
        {
            if(list1->val <= list2->val)
            {
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
        temp=temp->next;
        }
        if(list1!=nullptr)
        {
           temp->next= list1;
        }
        else
        {
            temp->next= list2;
        }
        return dummy->next;
    //     vector<int>arr;
    //     ListNode* temp1=list1;
    //     ListNode* temp2=list2;
    //     while(temp1!=NULL)
    //     {
    //         arr.push_back(temp1->val);
    //         temp1=temp1->next;
    //     }
    //    while(temp2!=NULL)
    //     {
    //         arr.push_back(temp2->val);
    //         temp2=temp2->next;
    //     }
    //     sort(arr.begin(),arr.end());
    //     ListNode* head=catl(arr);
    //     return head;brute force
        
    }
};