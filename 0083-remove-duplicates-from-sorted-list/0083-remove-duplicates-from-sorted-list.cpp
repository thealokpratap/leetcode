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
        ListNode* dummy= new ListNode(-101);
        ListNode* temp= head;
        ListNode* mover=dummy;
        while(temp!=NULL){
            if(mover->val!=temp->val){
                mover->next=temp;
               mover=mover->next;

            }
            temp=temp->next;

        }
        mover->next=NULL;
        return dummy->next;
        
    }
};