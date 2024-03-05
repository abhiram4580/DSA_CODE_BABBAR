#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={6,3,5,4,2,1};
    make_heap(arr,arr+6,greater<int>());
    sort_heap(arr,arr+6,greater<int>());
    for(auto x:arr){
        cout<<x<<endl;
    }

    return 0;

}