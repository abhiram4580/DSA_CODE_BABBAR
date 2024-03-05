#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintGreater(int arr[],int n){
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    int cum_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++){
        int freq=it->second;
        it->second=cum_freq;
        cum_freq=cum_freq+freq;
    }
    for(int i=0;i<n;i++){
        cout<<m[arr[i]]++<<" ";
    }

}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    PrintGreater(arr,n);

    return 0;
}