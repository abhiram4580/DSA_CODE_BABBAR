#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool TripletSum(int arr[],int n,int x){
    sort(arr,arr+n);
   for(int i=0;i<n;i++){
    int low=i+1;
    int high=n-1;
    while(low<high){
        if(arr[i]+arr[low]+arr[high]==x){
            return true;
        }
        else if(arr[i]+arr[low]+arr[high]>x){
            high--;
        }
        else{
            low++;
        }

    }
   
   }
    return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int x=8;
    int z=TripletSum(arr,n,x);
    cout<<z<<endl;
    return 0;
}