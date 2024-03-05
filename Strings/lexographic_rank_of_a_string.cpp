#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return fact(n-1)*n;
}
int LexRank(string str){
    int CHAR=256;
    int res=1;
    int count[CHAR]={0};
    int n=str.length();
    int mul=fact(n);
    for(int i=0;i<n;i++){
        count[str[i]]++;

    }
    for(int i=1;i<CHAR;i++){
        count[i]=count[i-1]+count[i];
    }
    for(int i=0;i<n;i++){
        mul=mul/(n-i);
        res=res+count[str[i]-1]*mul;
        for(int j=str[i];j<CHAR;j++){
            count[j]--;
        }
    }
    return res;

}

int main(){
    string str="abcd";
    int x=LexRank(str);
    cout<<x<<endl;
    return 0;
}