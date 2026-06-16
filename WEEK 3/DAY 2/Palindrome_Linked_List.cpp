class Solution {
public:
    ListNode*reverse(ListNode*head){
        if(head==NULL || head->next==NULL) return head;
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*newhead=reverse(slow);
        ListNode*last=newhead;
        while(last!=NULL){
            if(head->val!=last->val){
                return false;
            }
            head=head->next;
            last=last->next;
        }
        reverse(newhead);
        return true;

        
    }
};
