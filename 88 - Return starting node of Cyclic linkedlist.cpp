class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if (head == NULL || head->next == NULL) return NULL;

        // Step 1: Detect Cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Cycle found
                break;
            }
        }

        // If no cycle
        if (fast == NULL || fast->next == NULL) return NULL;

        // Step 2: Find the start of cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;  // starting node of the cycle
    }
};
