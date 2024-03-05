#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int *ptr=find(arr,arr+6,3);
    if(ptr==(arr+6)){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at  "<<(ptr-arr)<<endl;
    }

}