/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* current=head;
    struct ListNode*prev=NULL;
    struct ListNode*next=NULL;
    if (head==NULL){
        return NULL;
    }
    else if (head-> next==NULL){
        return head;
    }
    else{
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            
        }
        return prev;
    }
}
