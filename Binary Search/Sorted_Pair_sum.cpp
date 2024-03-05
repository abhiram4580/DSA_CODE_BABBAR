#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPairSum(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==x){
            return true;
        }
        else if(arr[low]+arr[high]>x){
            high--;
        }
        else{
            low++;
        }

    }
    return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int x=3;
    int z=IsPairSum(arr,n,x);
    cout<<z<<endl;
    return 0;
}