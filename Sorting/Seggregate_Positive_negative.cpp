#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Seggregate(int arr[],int n){
    int i=-1;
    int j=n;
    while(true){
        do{
            i++;
        }
        while(arr[i]<=0);
        do{
            j--;
        }
        while(arr[j]>0);
        if(i>=j){
            return ;
        }
        swap(arr[i],arr[j]);

    }
}

int main(){
    int arr[]={5,2,-6,-7};
    int n=4;
    Seggregate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}