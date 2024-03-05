#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{2,3,4,5};
    v.erase(v.begin());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<"Erase the Array"<<endl;
    v.erase(v.begin(),v.end()-1);
    for(int x:v){
        cout<<x<<endl;
    }
    return 0;
}
