#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple<char,int,int>t('g',20,30);
    cout<<tuple_size<decltype(t)>::value<<endl;
    char x;
    int y,z;
    tie(x,y,z)=t;
    cout<<x<<" "<<y<<" "<<z<<endl;
    tie(x,ignore,z)=t;
    cout<<x<<" "<<z;

    return 0;
}