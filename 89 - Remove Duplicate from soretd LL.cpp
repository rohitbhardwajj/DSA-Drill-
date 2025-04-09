class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            if (head == NULL) return NULL;
    
            ListNode* curr = head;
            ListNode* aage = head->next;
    
            while (aage != NULL) {
                if (curr->val == aage->val) {
                    ListNode* temp = aage;     // node to be deleted
                    aage = aage->next;
                    delete temp;               // free the memory
                } else {
                    curr->next = aage;
                    curr = aage;
                    aage = aage->next;
                }
            }
    
            curr->next = NULL;
            return head;
        }
    };
    