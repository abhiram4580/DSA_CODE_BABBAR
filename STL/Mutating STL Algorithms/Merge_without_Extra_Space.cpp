#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int b[],int m,int n){
    
    for(int i=0;i<m;i++){
        if(a[i]>b[0]){
            pop_heap(b,b+n,greater<int>());
            swap(b[n-1],a[i]);
            push_heap(b,b+n,greater<int>());
        }
    }

    sort(b,b+n);
}

int main(){
    int a[]={10,20,40};
    int b[]={5,15,30};
    int m=3;
    int n=3;
    Merge(a,b,m,n);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}