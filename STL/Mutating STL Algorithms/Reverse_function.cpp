#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    reverse(arr,arr+5);
    for(auto x:arr){
        cout<<x<<endl;
    }

    return 0;
}