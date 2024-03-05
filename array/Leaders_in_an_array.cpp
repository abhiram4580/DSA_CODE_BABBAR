#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Leaders(int arr[],int n){
    int max=arr[n-1];
    int arr2[n];
    
    int j=1;
    cout<<max<<endl;
    for(int i=n-2;i>=0;i--){
         if(arr[i]>max){
            max=arr[i];
            cout<<max<<endl;
           

           
         }
    }
}

int main(){
    
    int arr[]={10,2,3,4};
    int n=4;
    int arr2[n];
    Leaders(arr,n);
    

    return 0;
}
