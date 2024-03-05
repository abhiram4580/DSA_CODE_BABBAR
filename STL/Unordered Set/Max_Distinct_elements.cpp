#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxDistinct(int arr[],int n,int k){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);

    }
    int l=s.size();
    if(l>=n/k){
        return n/k;
    }
    else{
        return l;
    }

}

int main(){
    int arr[]={1,1,2,1,3,1};
    int n=6;
    int k=2;
    int x= maxDistinct(arr,n,k);
    cout<<x<<endl;
    return 0;
    
}