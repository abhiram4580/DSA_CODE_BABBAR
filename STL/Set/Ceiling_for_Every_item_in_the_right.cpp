#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintCeilingRight(int arr[],int n){
    set<int>s;
    int res[n];
    for(int i=n-1;i>=0;i--)
    {
        auto it=s.lower_bound(arr[i]);
        if(it==s.end()){
            res[i]= -1;
        }
        else{
            res[i]=(*it);
            
        }
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
}

int main(){
   int arr[]={1,2,3,4,5};
   int n=5;
   PrintCeilingRight(arr,n);
   return 0;
}
