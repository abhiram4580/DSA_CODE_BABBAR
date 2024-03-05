#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6};
    if(binary_search(arr,arr+5,5)==true){
        cout<<"Found"<<endl;

    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}