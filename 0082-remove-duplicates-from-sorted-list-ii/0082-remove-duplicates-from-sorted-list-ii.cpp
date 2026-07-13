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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>freq;
        ListNode* curr=head;
        while(curr != nullptr){
            freq[curr->val]++;
            curr=curr->next;
        }
        // for (auto x : freq){
        //     cout<<x.first<<"->"<<x.second<<endl;
        // }
        // return head;

        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        curr=head;
        while(curr != nullptr){
            if (freq[curr->val]==1){
                tail->next=curr;
                tail=tail->next;
            }
            curr=curr->next;
        }
        tail->next=nullptr;
        return dummy->next;
        
    }
};