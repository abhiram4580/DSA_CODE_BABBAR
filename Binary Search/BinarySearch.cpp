#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>x){
            high=mid-1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else {
            return mid;
        }

        
    }
    return -1;

}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int x=4;
    int z=BinarySearch(a,n,x);
    if(z==-1){
        cout<<"NO"<<endl;

    }
    else{
        cout<<z<<endl;
    }
return 0;
}