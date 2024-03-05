#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void LengthEvenOdd(int arr[],int n){
     int curr=1;
     int res=1;
     for(int i=1;i<n;i++){
        if(((arr[i]%2==0)&&(arr[i-1]%2!=0)) || ((arr[i]%2!=0)&&(arr[i-1]%2==0))){
            curr++;
            res=max(res,curr);

        }
        else{
            curr=1;
        }
     }
    cout<<res<<endl;
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    LengthEvenOdd(arr,n);

    return 0;

}