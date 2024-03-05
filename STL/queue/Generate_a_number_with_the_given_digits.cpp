#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Print(int n){
    queue<char>q;
    q.push('5');
    q.push('6');
    for(int i=0;i<n;i++){
        string curr=q.front();
        cout<<curr<<endl;
        q.pop();
        q.push(curr+'5');
        q.push(curr+'6');

    }
}

int main(){
    int n=5;
    Print(n);


return 0;

}