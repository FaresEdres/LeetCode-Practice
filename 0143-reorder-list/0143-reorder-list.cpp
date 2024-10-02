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
        if(!head||!(head->next))return ;
        ListNode* sptr=head;
        ListNode* fptr=head;
        
        while(fptr!=NULL&&fptr->next!=NULL){
            sptr=sptr->next;
            fptr=fptr->next->next;
        }
        ListNode*prev=NULL;
        ListNode*curr=sptr->next;
        sptr->next=NULL;
        ListNode*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*first=head;
        ListNode*second=prev;
        ListNode* temp1;
        ListNode* temp2;
        while(second){
            temp1=first->next;
            temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
            
        }
        
    }
};

