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
    ListNode* t = head;
    if(t->next ==  NULL){
        return t;

    }else{
        ListNode* a = reverse(t->next);
        a->next = t;
        return t;
    }

}

ListNode* reverseList(ListNode* head) {
    if(head == NULL) return NULL;
    ListNode* b = head;
    while(b-> next != NULL){
        b = b->next;
    }
    reverse(head);
    head->next = NULL;
    return b;
}
};
// 1 -> 2 -> 3 -> 4 -> null 

