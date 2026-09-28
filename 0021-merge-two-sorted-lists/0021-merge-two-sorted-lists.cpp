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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;
        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy;
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val <= temp2->val) {
                mover->next = temp1;
                temp1 = temp1->next;
                mover = mover->next;
            } else {
                mover->next = temp2;
                temp2 = temp2->next;
                mover = mover->next;
            }
        }
        if (temp1 != NULL) {
            mover->next = temp1;
        } else {
            mover->next = temp2;
        }
        return dummy->next;
    }
};