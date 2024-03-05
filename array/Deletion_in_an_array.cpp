#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Deleteele(int a[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x){
            break;
        }
        if(i==n){
            return n;
        }
        for(int j=i;j<n-1;j++){
            a[j]=a[j+1];
            return n-1;
        }
    }
}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int x=2;
    Deleteele(a,n,x);
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<endl;

    }
    return 0;
}