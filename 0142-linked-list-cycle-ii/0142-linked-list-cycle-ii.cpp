/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> seen;
        
        ListNode* curr = head;
        
        while (curr != nullptr) {
    
            if (seen.count(curr)) {
                return curr;
            }
            seen.insert(curr);
            curr = curr->next;
        }
        
        return nullptr;  
    }
};