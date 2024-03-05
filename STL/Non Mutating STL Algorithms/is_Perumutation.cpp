#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1{1,2,3,4,5};
    vector<int>v2{5,4,3,2,1};
    if(is_permutation(v1.begin(),v1.end(),v2.begin())){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}