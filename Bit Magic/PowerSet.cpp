#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintPowerSet(string str){
    int n=str.length();
    int powsize=pow(2,n);
    for(int counter=0;counter<powsize;counter++){
          for(int j=0;j<n;j++){
            if(counter&(1<<j)!=0){
                cout<<str[j];
            }
            cout<<endl;
          }
    }
}

int main(){
    string str="abc";
    PrintPowerSet(str);
    return 0;
}