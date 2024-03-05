#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintDistinct(int arr[],int n){
    
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if( flag==false){
            cout<<arr[i]<<endl;
        }

    }
}

int main(){
    int arr[]={2,2,3,4,5};
    int n=5;
    PrintDistinct(arr,n);

    return 0;
}