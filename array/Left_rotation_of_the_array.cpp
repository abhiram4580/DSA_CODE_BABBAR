#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Rotation(int a[],int n,int k){
    int temp[n];
    int j =0;
    for(int i=k;i<n;i++){
     temp[j]=a[i];
     j++;   
    }
    for(int i=0;i<k;i++){
        temp[j]=a[i];
        j++;
    }
    for(int l=0;l<n;l++){
        a[l]=temp[l];

    }


}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    Rotation(a,n,3);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    }

return 0;
    
}