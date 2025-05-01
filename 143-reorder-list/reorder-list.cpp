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
 ListNode* reverse(ListNode* head){
    ListNode* temp=head;
    ListNode* prev =NULL;
    while(temp!=NULL){
        ListNode* font = temp->next;     //Reverse function
        temp->next=prev;
        prev=temp;
        temp=font;
    }
    return prev;
 }


    void reorderList(ListNode* head) {
        ListNode* slow =head;
        ListNode*  fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;                     /* find mid and split the secnd 
                                                    half of the LL */
            fast=fast->next->next;
        }                                        /*then merge the LL */
         ListNode*second= reverse(slow->next);
         slow->next=NULL;
         ListNode* first=head;
         while(second){
              ListNode* temp1=first->next;
              first->next=second;
              ListNode* temp2 = second->next;
              second->next=temp1;
              first=temp1;
              second=temp2;
         }
         
    }
};