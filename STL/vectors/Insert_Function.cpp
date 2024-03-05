#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{3,4,5,6};
    v.insert(v.begin(),200);
    v.insert(v.begin()+2,400);
    v.insert(v.begin(),3,1000);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }

    return 0;
}