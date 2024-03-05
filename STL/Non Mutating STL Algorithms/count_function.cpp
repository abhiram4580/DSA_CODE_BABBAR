#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{1,2,3,3,3,4,5};
    auto it=count(v.begin(),v.end(),3);
    cout<<(it)<<endl;

    return 0;
}