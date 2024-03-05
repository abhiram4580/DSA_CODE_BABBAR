#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
   int data;
   Node *next;
   Node(int x){
    data=x;
    next=NULL;
   }
};

Node *seggregate(Node *head){
    Node *curr=head;
    Node *eS=NULL;
    Node *eE=NULL;
    Node *oS=NULL;
    Node *oE=NULL;
    for(curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }
            else{
                eE->next=curr;
                eE=eE->next;
            }
        }
        else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }
            else{
                oE->next=curr;
                oE=oE->next;
            }

        }
    }

        if(oS==NULL || eS==NULL){
            return head;

        }
        eE->next=oS;
        oE->next=NULL;

    
    return eS;
}


void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}

int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(23);
    Node *temp3=new Node(24);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    cout<<"Before Segregating we get"<<endl;
    PrintList(head);
    cout<<endl;
    cout<<"After Seggregating"<<endl;
    head=seggregate(head);
    PrintList(head);

    return 0;
}
