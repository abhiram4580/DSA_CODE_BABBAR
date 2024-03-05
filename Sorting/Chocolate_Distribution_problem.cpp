#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ChocolateDist(int arr[],int n,int m){
    if(m>n){
        return  -1;
    }
   sort(arr,arr+n);
   int res=arr[m-1]-arr[0];
   for(int i=0;i+m-1<n;i++){
      res=min(res,arr[i+m-1]-arr[i]);
   }
   return res;
}

int main(){
    int arr[]={3,4,1,9,56,7,9,12};
    int n=8;
    int m=5;
    int z=ChocolateDist(arr,n,m);
    cout<<z<<endl;
    return 0;
}

