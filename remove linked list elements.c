/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head!=NULL && head->val==val){
        head=head->next;
    }
    struct ListNode *m=head;
    while(m!=NULL && m->next!=NULL){
        if(m->next->val==val){
            m->next=m->next->next;
        }
        else{
            m=m->next;
        }
    }
    return head;
}
