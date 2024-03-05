#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={5,6,7,8};
    int arr2[]={1,2,3,4};
    int arr3[8];
    merge(arr1,arr1+4,arr2,arr2+4,arr3);
    for(int i=0;i<8;i++){
        cout<<arr3[i]<<endl;
    }
    return 0;
}