#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Generate(int n,int x,int y){
    queue<string>q;
    string s=to_string(x);
    string t=to_string(y);
    q.push(s);
    q.push(t);
    for(int i=0;i<n;i++){
       string curr=q.front();
       cout<<curr<<endl;
       q.pop();
       q.push(curr+s);
       q.push(curr+t);

    }


    
}

int main(){
    int n=4;
    int x=5;
    int y=6;
    Generate(n,x,y);
    return 0;
}