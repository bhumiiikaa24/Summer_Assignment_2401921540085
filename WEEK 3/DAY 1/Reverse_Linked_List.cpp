class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL){
            ListNode*next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;

        }
        head=prev;
        return head;

    }
};
