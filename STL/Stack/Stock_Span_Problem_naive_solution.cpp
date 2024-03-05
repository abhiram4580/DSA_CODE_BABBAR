#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Stock(int arr[],int n){
    int span=1;
    
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]<=arr[i]){
                 span++;
            }
            else{
                break;
            }
            
        }
        cout<<span<<" ";
    
    }
    
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int s[n];
    Stock(arr,n);
    return 0;

}