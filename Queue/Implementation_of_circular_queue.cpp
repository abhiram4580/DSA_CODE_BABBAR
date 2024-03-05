#include<iostream>
using namespace std;

struct Myqueue{
    int cap,size,front;
    int rear;
    int *arr;
    Myqueue(int c){
        cap=c;
        size=0;
        front=0;

    }

int getFront(){
    if(isEmpty()){
        return -1;

    }
    else{
        return front;
    }
}
int getRear(){
    if(isEmpty()){
        return -1;
    }
    else{
       return ((front+size-1)%cap);
    }
}
void Enqueue(int x){
    if(isFull()){
        return ;
    }
    else{
        int rear=getRear();
        rear=((rear+1)%cap);
        arr[rear]=x;
        size++;
    }
}
void Dequeue(){
    if(isEmpty()){
        return ;
    }
    front=(front+1)%cap;
    size--;
}
bool isEmpty(){
    return (size==0);
}
bool isFull(){
    return (size==cap);
}
};


int main(){
    Myqueue q(50);
    q.Enqueue(50);
    q.Enqueue(60);
    q.Enqueue(70);
    q.Dequeue();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;


return 0;
}