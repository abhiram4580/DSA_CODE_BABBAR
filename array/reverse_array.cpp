#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void reversearray(int arr[],int low,int high){
    while(high>low){
        swap(arr[high],arr[low]);
        high--;
        low++;

    }
}
void rotateanarray(int arr[],int n,int d){
    reversearray(arr,0,d-1);
    reversearray(arr,d,n-1);
    reversearray(arr,0,n-1);
   
}



int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int d=1;
    rotateanarray(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}