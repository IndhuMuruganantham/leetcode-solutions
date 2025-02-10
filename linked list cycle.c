/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode * l=head;
    struct ListNode * m=head;
    while(l!=NULL && l->next!=NULL){
        m=m->next;
        l=l->next->next;

        if(m==l){
            return true;
        }
      
    }
    return false;
}
