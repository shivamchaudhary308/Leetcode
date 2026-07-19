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
    int getDecimalValue(ListNode* head) {
        string binary="";
        ListNode* curr = head;
        while (curr != nullptr){
            binary+=to_string(curr->val);
            curr=curr->next;
        }
        // string to int 
        int num = 0; 
        for (int i=0;i<binary.size();i++){
            num=num*2+(binary[i]-'0');
        }
        return num;

    }
};