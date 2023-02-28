class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // check if head is null
        if (head == nullptr) return head;

        ListNode* curr = head; // current node
        ListNode* next = nullptr; // next node

        while (curr->next != nullptr) {
            // get next node
            next = curr->next;

            // compare current and next values
            if (curr->val == next->val) {
                // delete next node
                curr->next = next->next;
                delete next;
            } else {
                // move current pointer
                curr = curr->next;
            }
        }

        return head;
    }
};
