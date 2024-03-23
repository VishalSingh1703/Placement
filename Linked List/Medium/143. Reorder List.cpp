https://leetcode.com/problems/reorder-list/?envType=daily-question&envId=2024-03-23


  if (!head || !head->next) return;
        
        // Find the middle element
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the second half of the list
        ListNode *prev = nullptr, *curr = slow->next, *nextNode;
        slow->next = nullptr; // Break the list into two halves
        while (curr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        // Merge the two halves alternatively
        ListNode *first = head, *second = prev, *temp;
        while (second) {
            temp = first->next;
            first->next = second;
            second = second->next;
            first->next->next = temp;
            first = temp;
        }
