#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Insertele(int a[],int n,int x,int cap,int pos){
    if(cap==n){
        return n;
    }
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        a[i+1]=a[i];

    }
    a[idx]=x;
    return n+1;
}
void Printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    
    }
}

int main(){
    int a[20]={1,2,3,4,5};
    int n=20;
    int cap=10;
    int x=458;
    int pos=2;
    Insertele(a,n,x,cap,pos);
    Printarray(a,6);


return 0;
}


