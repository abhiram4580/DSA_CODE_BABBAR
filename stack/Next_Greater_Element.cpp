#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void NextGreater(int arr[],int n){
    stack<int>s;
    cout<<"-1"<<" ";
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int ng=(s.empty())?-1:(s.top());
        cout<<ng<<" ";
        s.push(arr[i]);

    }
}
// Output in the reverse order of the input of the local stream.

int main(){
  int arr[]={5,4,3,2,2};
  int n=5;
  NextGreater(arr,n);
  return 0;
}