#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int  indexofLastOccurence(int arr[],int low, int high,int x,int n){
     int mid=(high+low)/2;
     if(low>high){
        return -1;
     }
     
        if(arr[mid]>x){
            return(arr,low,mid-1,x,n);
        }
        else if(arr[mid]<x){
            return(arr,mid+1,high,x,n);
        }
        else{
            if((mid==n-1)||(arr[mid]!=arr[mid+1])){
                return mid;
            }
            else{
                return  indexofLastOccurence(arr,mid+1,high,x,n);
            }
        }
     
}

int main(){
    int arr[]={1,2,3,3,4,5};
    int n=6;
    int x=3;
    int low=0;
    int high=5;
    int z= indexofLastOccurence(arr,low,high,x,n);
    cout<<"The required answer is:"<<endl;
    cout<<z<<endl;
    return 0;

}