#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintFreq(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;

    }
    for(auto x:m){
        cout<<x.first<<' ';
        cout<<x.second<<endl;
    }

}

int main(){
    int arr[]={1,1,2,3,4,5};
    int n=6;
    PrintFreq(arr,n);
    return 0;
}
