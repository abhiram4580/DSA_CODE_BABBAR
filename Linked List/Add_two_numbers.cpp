
  ListNode *reverse(ListNode *head){
       ListNode *prev=NULL;
       ListNode *curr=head;
       while(curr!=NULL){
           ListNode *next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       return prev;
   }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode *head1=reverse(l1);
        ListNode *head2=reverse(l2);
        ListNode *newhead=new ListNode(-1);
        ListNode *curr=newhead;
        ListNode *curr1=head1;;
        ListNode *curr2=head2;
        int rem=0;
        while(curr1!=NULL && curr2!=NULL){
               int d=curr1->val+curr2->val+rem;
               if(d>=10){
                  int x=d%10;
                  rem=1;
                  curr->next=new ListNode(x);
                  curr=curr->next;
               }
               else{
                   rem=0;
                   curr->next=new ListNode(d);
                   curr=curr->next;


               }
               curr1=curr1->next;
               curr2=curr2->next;
               
               
        }
        while(curr1!=NULL){
            int d=curr1->val+rem;
            if(d>=10){
                int x=d%10;
                rem=1;
                curr->next=new ListNode(x);
                curr=curr->next;
                
            }
            else{
                curr->next=new ListNode(d);
                curr=curr->next;
                rem=0;
            }
            curr1=curr1->next;
        }
        while(curr2!=NULL){
            int d=curr2->val+rem;
            if(d>=10){
                int x=d%10;
                rem=1;
                
                curr->next=new ListNode(x);
                curr=curr->next;
                
            }
            else{
                curr->next=new ListNode(d);
                curr=curr->next;
                rem=0;
            }
            curr2=curr2->next;
        }
        if(rem==1){
            curr->next=new ListNode(1);
            curr=curr->next;
            
        }
        ListNode *fin=curr;
        ListNode *temp=newhead;
        newhead=newhead->next;
        delete(temp);
        ListNode *final=reverse(newhead);
        
        return final;
    }