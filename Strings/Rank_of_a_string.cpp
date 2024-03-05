#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fact(n-1);
}

int RankofStr(string str){
    int res=1;
    const int CHAR=256;
    int n=str.length();
    int count[CHAR]={0};
    int mul=fact(n);
    for(int i=0;i<n;i++){
        count[str[i]]++;
    }
    for(int i=1;i<CHAR;i++){
        count[i]+=count[i-1];
    }
    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=res+count[str[i]-1]*mul;
        for(int j=str[i];j<CHAR;j++){
            count[j]--;
        }
    }
  return res;
}

int main(){
    string str="abc";
    int x=RankofStr(str);
    cout<<x<<endl;
    return 0;
}