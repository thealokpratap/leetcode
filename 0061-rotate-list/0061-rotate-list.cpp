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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        
        
        temp->next = head;

        temp=temp->next;
        int trav=abs(cnt-(k%cnt)-1);
        cout<<trav;

        while(trav!=0){
            temp=temp->next;
            trav--;
        }

        head=temp->next;

        temp->next=NULL;
        return head;
        
    }
};