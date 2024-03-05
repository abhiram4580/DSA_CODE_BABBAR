#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,4,5,1,2};
    rotate(arr,arr+4,arr+6);
    for(auto x:arr){
        cout<<x<<" ";

    }


return 0;
}