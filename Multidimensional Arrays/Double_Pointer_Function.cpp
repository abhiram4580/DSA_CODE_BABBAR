#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Double(int **arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
}

int main(){
    int **arr;
    int m=3;
    int n=2;
    arr=new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;

}