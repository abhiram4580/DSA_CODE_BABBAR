#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{1,2,3,4,4,5};
    fill(v.begin()+1,v.end(),5);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}