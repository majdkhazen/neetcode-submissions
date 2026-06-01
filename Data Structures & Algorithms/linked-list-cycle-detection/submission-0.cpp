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
    bool hasCycle(ListNode* head) {
        ListNode* A = head; 
        ListNode* B = head->next; 
        if(A == NULL || B == NULL){
            return false; 
        }
        while (B){
            if(B->next == NULL){
                return false;
            }
            if(A == B) return true;
            B = B->next; 
            if(A == B) return true;
            B = B->next; 
            A=A->next;
        }
        return false;
    }
};
