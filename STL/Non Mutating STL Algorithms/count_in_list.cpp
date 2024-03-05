#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l{1,2,3,3,3,4,5};
    auto it=count(l.begin(),l.end(),7);
    cout<<it<<endl;

    return 0;
}