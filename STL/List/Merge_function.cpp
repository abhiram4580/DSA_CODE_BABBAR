#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l1{1,2,3,7,8,9};
    list<int>l2{4,5,6};
    l1.merge(l2);
    for(int x:l1){
        cout<<x<<" ";
    }
    return 0;
}