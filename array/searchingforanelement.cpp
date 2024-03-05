#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Search(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<"Element is present"<<endl;
            cout<<"the pos of the element is "<< i<<endl;
        }
        
        
    }
    
}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int k=5;
    Search(a,n,k);

return 0;
}