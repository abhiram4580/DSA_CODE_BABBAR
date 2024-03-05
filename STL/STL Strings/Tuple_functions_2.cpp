#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple<char,int,int>t1('g',20,30);
    tuple<string,int>t2("abc",50);
    auto t3=tuple_cat(t1,t2);
    cout<<get<0>(t3)<<" "<<get<2>(t3)<<endl;
    return 0; 
    }