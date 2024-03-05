#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    auto it=lower_bound(arr,arr+5,3);
    cout<<(*it)<<endl;

    return 0;
}