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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        if(temp == nullptr){
            return temp;
        }
        while(head != nullptr && head->val==val){
            ListNode* deletenode=head;
            head=head->next;
            delete(deletenode);
        }
        temp=head;
        while(temp != nullptr && temp->next != nullptr){
            if(temp->next->val == val){
              
                ListNode* deletenode=temp->next;
                temp->next=temp->next->next;
                delete(deletenode);
            }
            else{
                temp=temp->next;
            }  
        }
        temp=head;
        return temp;
        
    }
};