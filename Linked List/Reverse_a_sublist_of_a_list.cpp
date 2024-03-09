 Node *reverse(Node *head){
        Node *curr=head;
        Node *prev=NULL;
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    
    
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(m==n){
            return head;
        }
        Node *head1=new Node(-1);
        head1->next=head;
        Node *curr1=head1;
        for(int i=0;i<m;i++){
            curr1=curr1->next;
        }
        Node *point1=curr1;
        curr1=head1;
        for(int i=0;i<n;i++){
            curr1=curr1->next;
        }
        Node *point2=curr1;
        Node *check=curr1->next;
        curr1->next=NULL;
        Node *newhead=reverse(point1);
        curr1=head1;
        for(int i=0;i<m-1;i++){
            curr1=curr1->next;
        }
        curr1->next=newhead;
        Node *curr2=newhead;
        while(curr2->next!=NULL){
            curr2=curr2->next;
        }
        curr2->next=check;
        return head1->next;
        
        
    }