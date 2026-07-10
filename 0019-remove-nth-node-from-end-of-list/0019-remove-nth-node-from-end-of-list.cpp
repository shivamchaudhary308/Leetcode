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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* curr=head;
        while(curr != nullptr){
            length+=1;
            curr=curr->next;

        }
        // find the given element to delete from the start by subtracting
        int target=length-n;
        if (target ==0){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        curr=head;
        for (int i=0;i<target-1;i++){
            curr=curr->next;
        }
        // delete target node
        ListNode* temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        return head;
        
    }
};