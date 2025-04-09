class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return nullptr;

        Node* curr = head;
        while (curr) {
            if (curr->child) {
                Node* nextNode = curr->next;

                // Flatten the child list
                Node* child = flatten(curr->child);

                // Connect current node to child
                curr->next = child;
                child->prev = curr;
                curr->child = nullptr;

                // Go to the end of the flattened child list
                Node* temp = child;
                while (temp->next) {
                    temp = temp->next;
                }

                // Connect the end of the child list to nextNode
                if (nextNode) {
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};
