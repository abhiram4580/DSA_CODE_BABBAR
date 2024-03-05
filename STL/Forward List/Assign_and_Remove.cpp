#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  main(){
    forward_list<int>l;
     l.assign({1,2,3,4,4,4,5,6,6});
     l.remove(4);
     for(int x:l){
        cout<<x<<" ";
     }
     cout<<endl;
     forward_list<int>l2;
     l2.assign(l.begin(),l.end());
     cout<<"This is for l2"<<endl;
     for(int x:l2){
        cout<<x<<" ";
     }

     return 0;
}