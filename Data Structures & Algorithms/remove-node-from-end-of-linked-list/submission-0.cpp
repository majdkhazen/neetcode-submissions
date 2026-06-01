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
   ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len = 0;
    ListNode* it = head;
    while(it) {
        len++;
        it = it->next;
    }
    if (n>len){return nullptr;}
    if (n==len){return head->next;}
    it = head;
    for (int i = 0; i < (len-n-1); i++) {
        it = it->next;
    }
    it->next = it->next->next;
    return head; 
}
};
