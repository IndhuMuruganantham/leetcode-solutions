/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * }o;
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode new;
    new.next=NULL;
    struct ListNode *s=&new;
    while(list1!=NULL && list2!=NULL){
        if(list2->val > list1->val){
            s->next=list1;
            list1=list1->next;
        }
        else{
            s->next=list2;
            list2=list2->next;
        }
        s=s->next;

    }
    if(list1!=NULL){
        s->next=list1;
    }
    else{
        s->next=list2;
    }
    return new.next;
}
