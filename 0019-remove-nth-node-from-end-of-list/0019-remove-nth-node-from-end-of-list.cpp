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
        // to count the size of the linked list 
        ListNode* temp=head;
        int count=0;
        while(temp != nullptr){
            count++;
            temp=temp->next;
        }
        // if count is the first element of the linked list 
        temp=head;
        if(count==n){
            ListNode* delete_head=head;
            head=head->next;
            delete(delete_head);
            return head;
        }
        else{
            temp=head;
            int pos=count-n-1;
            int count_a=0;
            while(count_a<pos){
                temp=temp->next;
                count_a++;
            }
            ListNode* deletehead=temp->next;
            if(temp->next->next != nullptr){
                temp->next=temp->next->next;
            }
            else{
                temp->next=nullptr;
            }
            delete(deletehead);
            return head;
        }
    }
};