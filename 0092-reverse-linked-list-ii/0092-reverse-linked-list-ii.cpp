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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* left_n;
        ListNode* right_n;
        int count=1;
        while(temp != nullptr){
            if(count==left){
                left_n=temp;
            }
            if(count==right){
                right_n=temp;
            }
            temp=temp->next;
            count++;
        }
        temp=left_n;
        ListNode* left_node=left_n;
        stack<int> st;
        while(temp != right_n->next){
            st.push(temp->val);
            temp=temp->next;
            left_node=temp;
        }
        temp=head;
        ListNode* ans=new ListNode(0);
        ListNode* result=ans;
        while(temp != left_n){
            result->next=temp;
            result=result->next;
            temp=temp->next;
        }
        while(! st.empty()){
            result->next=new ListNode(st.top());
            st.pop();
            result=result->next;
        }
        // while(right_n != nullptr){
        //     result->next=right_n;
        //     right_n=right_n->next;
        //     result=result->next;
        // }
        result->next = right_n->next; 
        return ans->next;
    }
};