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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* prevGroupTail = NULL;
        ListNode* newHead=NULL;
        while(curr!=NULL){
            ListNode* check=curr;
            int cnt=0;
            while(check!=NULL&&cnt<k){
                check=check->next;
                cnt++;
            }
            if(cnt<k){
                if(prevGroupTail!=NULL)
                prevGroupTail->next=curr;
                else
                newHead=curr;
                break;
            }
            ListNode* currHead = curr;

            ListNode* nextHead = check;
            ListNode* prev = NULL;
            while(curr!=nextHead){
                ListNode* next = curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }

            currHead->next=nextHead;

            if(prevGroupTail!=NULL){
                prevGroupTail->next=prev;
            }
            else{
                newHead=prev;
            }

            prevGroupTail=currHead;
        }
        return newHead;
    }
};
