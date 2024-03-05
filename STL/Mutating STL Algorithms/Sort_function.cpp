#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,4,35,63,2,4,2};
    sort(arr,arr+7);
    cout<<"Ascending Order"<<endl;
    for(int x:arr){
        cout<<x<<endl;
    }


     sort(arr,arr+7,greater<int>());
    cout<<"Descending Order"<<endl;
    for(auto x:arr){
        cout<<x<<endl;
    }

}