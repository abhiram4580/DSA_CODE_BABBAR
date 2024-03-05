#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isSorted(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"The given array is not sorted"<<endl;
        }
        
    }
    cout<<"the given list is sorted"<<endl;
}


int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    isSorted(a,n);

return 0;
}


