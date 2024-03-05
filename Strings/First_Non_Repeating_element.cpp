#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res=INT_MAX;
int NonRepeat(string &str){
    const int CHAR=256;
    int fI[CHAR]={-1};
    for(int i=0;i<str.length();i++){
        if(fI[i]==-1){
            fI[i]=i;
        }
        else{
            fI[i]=-2;
        }
    }
    for(int i=0;i<CHAR;i++){
        if(fI[i]>=0){
            res=min(res,fI[i]);
        }
    }
    return res;

    
}

int main(){
    string str="abhiram";
    int x=NonRepeat(str);
    cout<<x<<endl;
    return 0;
}