#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>l{1,2,3,4,5};
    l.push_front(0);
    l.push_front(30);
    l.push_front(40);
    l.pop_front();
    l.pop_front();
    for(int x:l){
        cout<<x<<endl;
    }

    return 0;
}