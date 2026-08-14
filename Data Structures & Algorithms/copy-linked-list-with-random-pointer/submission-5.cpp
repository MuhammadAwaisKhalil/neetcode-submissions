/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*, Node*> m;
        Node* newHead = new Node(head->val);
        Node* newCur = newHead;
        Node* oldCur = head;
        m[oldCur]=newCur;
        oldCur=oldCur->next;
        while(oldCur!=NULL){
            Node* copy = new Node(oldCur->val);
            m[oldCur]=copy;
            newCur->next=copy;
            oldCur=oldCur->next;
            newCur=newCur->next;
        }
        oldCur=head;
        newCur=newHead;

        while(oldCur!=NULL){
            newCur->random = m[oldCur->random];
            oldCur=oldCur->next;
            newCur=newCur->next;
        }

        return newHead;
    }
};
