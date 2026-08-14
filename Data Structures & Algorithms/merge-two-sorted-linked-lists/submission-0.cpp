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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1==NULL){
            return head2;
        }
        else if(head2==NULL){
            return head1;
        }
        ListNode* ans;
        if(head1->val<=head2->val){
            ans=head1;
            head1=head1->next;
        }
        else{
            ans=head2;
            head2=head2->next;
        }
        ListNode* nHead = new ListNode(ans->val);
        ListNode* temp = nHead;
        
        while(head1!=NULL&&head2!=NULL){
            if(head1->val<=head2->val){
                ListNode* copy = new ListNode(head1->val);
                temp->next=head1;
                head1=head1->next;
            }
            else{
                temp->next=head2;
                head2=head2->next;
            }
            temp=temp->next;
        }

        if(head1==NULL){
            temp->next = head2;
        }else if(head2==NULL){
            temp->next=head1;
        }

        return nHead;
    }
};
