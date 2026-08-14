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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
        return l2;
        if(l2==NULL)
        return l1;

        int carry = 0;
        ListNode dummy(0);
        ListNode* temp = &dummy;

        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL&&l2!=NULL){
                int value = l1->val + l2->val;
                int ans = (value+carry)%10;
                carry = (value+carry)/10;
                ListNode* ansNode = new ListNode(ans);
                l1=l1->next;
                l2=l2->next;
                temp->next = ansNode;
                
            }
            else if(l1==NULL){
                int ans = (l2->val + carry)%10;
                carry = (l2->val + carry)/10;
                ListNode* ansNode = new ListNode(ans);
                l2=l2->next;
                temp->next = ansNode;
                
            }
            else{
                int ans = (l1->val + carry)%10;
                carry = (l1->val + carry)/10;
                ListNode* ansNode = new ListNode(ans);
                l1=l1->next;
                temp->next = ansNode;
                
            }
            temp=temp->next;
            
        }
        if(carry==1){
                ListNode* ansNode = new ListNode(carry);
                temp->next=ansNode;
                temp=temp->next;
            }
        return dummy.next;


    }
};
