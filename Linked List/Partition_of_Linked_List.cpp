 ListNode* partition(ListNode* head, int x) {
      ListNode *left=new ListNode(-1);
      ListNode *right=new ListNode(-1);
      ListNode *head1=left;
      ListNode *head2=right;
      ListNode *curr=head;
      while(curr!=NULL){
          if(curr->val<x){
              left->next=curr;
              left=left->next;
          }
          else{
              right->next=curr;
              right=right->next;

          }
          curr=curr->next;


      }
      
      head1=head1->next;
      head2=head2->next;
      left->next=head2;
      right->next=NULL;
      if(head1==NULL){
          return head2;
      }
      return head1;
    }