https://leetcode.com/problems/remove-nodes-from-linked-list/?source=submission-ac


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
    ListNode* removeNodes(ListNode* head) {
        vector<ListNode*> st;
        ListNode *temp = head;
        while(temp)
        {
            while(!st.empty() && st.back()->val < temp->val) st.pop_back();
            if (st.empty()) head = temp;
            else st.back()->next = temp;
            st.push_back(temp);
            temp = temp->next;
        }
        return head;
    }
};
