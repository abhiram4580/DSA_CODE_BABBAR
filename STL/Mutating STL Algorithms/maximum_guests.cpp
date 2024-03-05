#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxGuest(int arr[],int dep[],int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,curr=1,res=1;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            i++;
            curr++;
        }
        else{
            j++;
            curr--;
        }
        res=max(res,curr);
    }
    return res;
    
}

int main(){
    int arr[]={900,700,600};
    int dep[]={1000,800,730};
    int n=3;
   int x= MaxGuest(arr,dep,n);
   cout<<x<<endl;

   return 0;
}