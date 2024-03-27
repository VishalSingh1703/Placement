https://leetcode.com/problems/rotate-list/


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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head) return head;
        int length = 0;
        ListNode* temp = head;
        while(temp) { temp = temp->next; length++; }
        k %= length;
        ListNode *fast = head, *slow = head;
        while(k--) fast = fast->next;
        while(fast->next) { fast = fast->next; slow = slow->next; }
        fast->next = head;
        head = slow->next;
        slow->next = NULL;
        return head;
    }
};
