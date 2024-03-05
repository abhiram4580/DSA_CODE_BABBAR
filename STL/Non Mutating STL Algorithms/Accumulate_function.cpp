#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,3,4,5,6};
    int x=0;
   int y= accumulate(arr,arr+6,x);
   cout<<y<<endl;
}