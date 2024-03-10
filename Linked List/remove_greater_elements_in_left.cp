Node *compute(Node *head)
    {
        // your code goes here
        Node *head1=reverse(head);
        int maxi=head1->data;
        Node *curr=head1->next;
        Node *prev=head1;
        Node *temp=head1;
        while(curr!=NULL){
            if(prev->data>curr->data){
                prev->next=curr->next;
               
                curr=curr->next;
            }
            else{
                prev=prev->next;
                
                curr=curr->next;
            }
        }
        Node *final=reverse(head1);
        return final;
        
    }