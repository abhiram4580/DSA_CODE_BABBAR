#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Abhiram";
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<endl;
    }
    cout<<"New way"<<endl;
    for(char x:str){
        cout<<x<<endl;
    }
    return 0;
}