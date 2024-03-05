#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1{5,6,7,8};
    vector<int>v2{1,2,3,4};
    vector<int>v3(8);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<(*it)<<endl;
    
    }
    return 0;
}