#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{4,5,6,7};
    v.clear();
    if(v.empty()){
        cout<<"The array has been cleared"<<endl;
    }
    else{
        cout<<"The array has not been cleared"<<endl;
    }

    return 0;
}