class Solution {
  public:
    Node *reverse(Node *head) {
        if (!head) return head;

        Node* curr = head;
        Node* prev = NULL;

        
        while (curr != NULL) {
            prev = curr->prev;
            curr->prev = curr->next;
            curr->next = prev;
            curr = curr->prev; 
        }

       
        if (prev != NULL) {
            head = prev->prev;
        }

        return head;
        
    }
};