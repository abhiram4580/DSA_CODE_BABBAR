#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int LeftMost(string &str){
    const int CHAR=256;
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(count[str[i]]>1){
            return i;
        }
    }
    return -1;
}

int main(){
    string str="abhiram";
    int x=LeftMost(str);
    cout<<x<<endl;
    return 0;
}