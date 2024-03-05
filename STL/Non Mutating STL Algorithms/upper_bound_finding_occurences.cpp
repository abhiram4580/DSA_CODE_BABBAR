#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{1,2,3,3,4,5};
    auto it=upper_bound(v.begin(),v.end(),3);
    if(it!=v.end() && (*(it-1)==3)){
        cout<<"found at "<<(it-1-v.begin())<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}