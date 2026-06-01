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
    Node* it = head;
    Node* prev = NULL;
    Node* head2 = nullptr;
    int index =0;
    std::unordered_map<Node*, int> map1;
    std::unordered_map<int, Node*> map2; // inter the index of the node and get the node that random of the node points at
    while(it){
        Node* new_node = new Node(it->val);
        if(prev == NULL) {
            prev = new_node;
            head2 = new_node;
            } else {
                prev->next = new_node;
                prev = prev->next;
        }
        map1[it] = index;
        map2[index] = new_node;
        it = it->next;
        index++;
    }
    it = head;
    Node* it2 = head2;
    while(it) {
        if (it->random == nullptr) {
            it2->random = nullptr;
        } else {
            int i = map1[it->random];
            it2->random = map2[i];
        }
        it = it->next;
        it2 = it2->next;
    }
    return head2;
}


};
