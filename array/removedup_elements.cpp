#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int remove_dup(int a[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }

    }
return res;
    
}

int main(){
   int a[]={1,2,3,3,4,5,5,5};
   int n=8;
  int r=  remove_dup(a,n);
   for(int i=0;i<r;i++){
      cout<<a[i]<<endl;
   }

return 0;
}