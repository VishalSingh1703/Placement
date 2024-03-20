https://leetcode.com/problems/merge-in-between-linked-lists/?envType=daily-question&envId=2024-03-20


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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode *h = list1, *start = list1;

        int count = 1;
        while(++count <= a) h = h->next;
        ListNode *temp = h->next;
        h->next = list2;

        while(count++ <= b+1) temp = temp->next;
        while(h->next) h = h->next;
        
        h->next = temp;
        return start;
    }
};
