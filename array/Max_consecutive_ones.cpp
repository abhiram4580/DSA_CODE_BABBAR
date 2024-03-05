#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void CountCons(int arr[],int n){
    int curr=0;
    int res;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr=0;
        }
        else{
            curr++;
            res=max(res,curr);

        }
    }
    cout<<res<<endl;
    
}

int main(){
    int arr[]={1,1,1,0,0,1,1,1,1};
    int n=9;
    CountCons(arr,n);
    return 0;
}