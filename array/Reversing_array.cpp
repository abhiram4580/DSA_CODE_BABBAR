#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reversearray(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;

    }
}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    Reversearray(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    }

return 0;
}