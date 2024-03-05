#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void movezero(int a[],int n){
    int count=0; 
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;

            
        }
    }
}

int main(){
    int a[]={1,2,3,0,4,5};
    int n=6;
    movezero(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;

}