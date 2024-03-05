#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyStack{
	int *arr;
	int top;
	int cap;
	MyStack(int c){
		cap=c;
		top=-1;
		arr=new int[cap];
		}
	void push(int x){
		if(top==cap-1){
			cout<<"Stack Overflow"<<endl;
		}
		top++;
		arr[top]=x;
		
	}
	int  pop(){
		if(top==-1){
			cout<<"Stack Underflow"<<endl;
		}
		
		
	   int res=arr[top];
	   top--;
	   return res;
	}
	int  peek(){
		
		return arr[top];
	}
	int size(){
		return (top+1);
		
			}
	bool isEmpty(){
		return (top==-1);
	}
};

int main(){
	MyStack s(5);
	s.push(200);
	s.push(10);
	
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.isEmpty()<<endl;
    return 0;	
}
