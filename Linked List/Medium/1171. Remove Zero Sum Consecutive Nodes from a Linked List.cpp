https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/?envType=daily-question&envId=2024-03-12


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
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        int prefixSum = 0;
        unordered_map <int, ListNode*> mp;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        mp[0] = dummy;
        while( head )
        {
            prefixSum += head->val;
            if(mp.find(prefixSum) != mp.end())
            {
                ListNode *start = mp[prefixSum];
                ListNode *temp = start;
                int pSum = prefixSum;
                while(temp != head)
                {
                    temp = temp->next;
                    pSum += temp->val;
                    if(temp != head) mp.erase(pSum);
                }
                start->next = head->next;
            }
            else mp[prefixSum] = head;
            head = head->next;
        }
        return dummy->next;
    }
};
