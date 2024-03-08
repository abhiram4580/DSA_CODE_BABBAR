
    ListNode *findMiddle(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }

    ListNode *Sort2LL(ListNode *head1,ListNode *head2){
        ListNode *head3=new ListNode(-1);
        ListNode *curr1=head1;
        ListNode *curr2=head2;
        ListNode *temp=head3;
        while(curr1!=NULL && curr2!=NULL){
            if(curr1->val<=curr2->val){
                temp->next=curr1;
                
                curr1=curr1->next;
            }
            else{
                temp->next=curr2;
             
                curr2=curr2->next;
            }
            temp=temp->next;

        }
        if(curr1!=NULL){
            temp->next=curr1;
            
        }
        if(curr2!=NULL){
            temp->next=curr2;
        }
        return head3->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *mid=findMiddle(head);
        ListNode *left=head;
        ListNode *right=mid->next;
        mid->next=NULL;
        ListNode *lefty=sortList(left);
        ListNode *righty=sortList(right);
        return Sort2LL(lefty,righty);
    }
