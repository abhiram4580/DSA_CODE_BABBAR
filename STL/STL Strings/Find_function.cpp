#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Abhiram";
    int res=s.find("ram");
    if(res==string::npos){
        cout<<"Not Found";
            }
    else{
        cout<<"found at "<<res<<endl;
    }
    return 0;
}