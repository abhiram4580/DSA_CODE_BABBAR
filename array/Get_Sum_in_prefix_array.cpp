#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSum(int Prefix_sum[],int l,int r){
    if(l!=0){
        prefix_sum[r]-Prefix_sum[l-1];
    }
    else{
        prefix_sum[r];
    }
}