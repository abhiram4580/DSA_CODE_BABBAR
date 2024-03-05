#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PairArray(int a[],char b[],int n){
    pair<int,char>pa[n];
    for(int i=0;i<n;i++){
        pa[i]={a[i],b[i]};
    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++){
        cout<<pa[i].first<<" "<<pa[i].second<<endl;
    }

    
}

int main(){
    int a[]={5,4,3,2};
    char b[]={'a','c','b','e'};
    PairArray(a,b,4);
    return 0;


}