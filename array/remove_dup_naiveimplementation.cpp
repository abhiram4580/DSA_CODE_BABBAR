#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Removedup(int a[],int n){
    int temp[n];
    temp[0]=a[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=a[i]){
            temp[res]=a[i];
            res++;
        }

    }
    for(int i=0;i<res;i++){
        a[i]=temp[i];

    }

return res;
}

int main(){ 
     int a[]={1,2,3,3,4,5};
     int n=6;
    int r =Removedup(a,n);
    for(int i=0;i<r;i++){
        cout<<a[i]<<endl;
    }

return 0;
}