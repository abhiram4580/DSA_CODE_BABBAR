#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Max_sum(int arr[],int n){
    int max_sum=0;
    for(int i=0;i<n;i++){
        int sum=0;
         for(int j=i;j<n;j++){
           sum=sum+arr[i];
           max_sum=max(sum,max_sum);

         }
    }
    return max_sum;
}


int main(){
    int arr[]={1,-2,3,4,-5};
    int n=5;
    cout<<Max_sum(arr,n)<<endl;
    return 0;

}