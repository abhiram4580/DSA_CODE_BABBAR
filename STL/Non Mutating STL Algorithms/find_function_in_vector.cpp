#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{1,2,3,4};
    auto it=find(v.begin(),v.end(),3);
    if(it==v.end()){
        cout<<"Element Not Found";
    }
    else{
        cout<<"Element Fount at "<<(it-v.begin());
    }
    
}