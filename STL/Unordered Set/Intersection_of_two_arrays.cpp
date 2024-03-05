#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Intersection(int a[],int n,int b[],int m){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(b[i]);

    }
    for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end()){
            cout<<a[i]<<endl;
        }
    }
}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int b[]={1,2,3};
    int m=3;
    Intersection(a,n,b,m);
    return 0;
}