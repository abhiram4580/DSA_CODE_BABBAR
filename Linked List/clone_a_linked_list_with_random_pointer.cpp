 Node *copyList(Node *head)
    {
        //Write your code here Node *temp=head;
        Node *temp=head;
        while(temp!=NULL){
            Node *copynode=new Node(temp->data);
            copynode->next=temp->next;
            temp->next=copynode;
            temp=temp->next->next;
        }
        temp=head;
        Node *copynode=NULL;
        while(temp!=NULL){
            copynode=temp->next;
            if(temp->arb!=NULL){
                copynode->arb=temp->arb->next;
            }
            temp=temp->next->next;
        }
        Node *dummy=new Node(-1);
        Node *headfin=dummy;
         temp=head;
         while(temp!=NULL){
             dummy->next=temp->next;
             temp->next=temp->next->next;
             temp=temp->next;
             dummy=dummy->next;
         }
         return headfin->next;
    }