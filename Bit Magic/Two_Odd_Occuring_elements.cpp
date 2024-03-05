#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void OddAppearing(int arr[],int n){
    int XOR=0;
    int res1=0,res2=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    int s=(XOR)&(XOR-1);
    for(int i=0;i<n;i++){
        if((arr[i]&s)!=0){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2<<endl;
     
}

int main(){
    int arr[]={1,1,2,2,3,4,4,5};
    int n=8;
    OddAppearing(arr,n);
    return 0;
}