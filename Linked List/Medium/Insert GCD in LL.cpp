https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/


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

    int computeGCD(int a, int b)
    {
        if(a == b) return a;
        else if(a > b) return computeGCD(a - b, b);
        else return computeGCD(a, b - a);
        return 1;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        if(!head || !head->next) return head;
        ListNode *temp = head;
        while(temp->next != nullptr)
        {
            ListNode *temp1 = new ListNode();
            temp1->val = computeGCD(temp->val, temp->next->val);
            temp1->next = temp->next;
            temp->next = temp1;
            temp = temp->next->next;
        }
        return head;
    }
};
