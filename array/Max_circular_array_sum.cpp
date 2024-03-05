#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  int normalSubarraySum(int arr[], int num){
        
        int rer=arr[0];
        int maxfirst=arr[0];
        for(int i=1; i<num; i++){
            maxfirst=max(arr[i],maxfirst+arr[i]);
            rer= max(rer,maxfirst);
        }
    
        return rer;
    }
    
         int circularSubarraySum(int arr[], int num){
             int max_normal=normalSubarraySum(arr,num);
             if(max_normal<0){
                 return max_normal;
             }
             int arr_sum=0;
             for(int i=0; i<num;i++){
                 arr_sum+=arr[i];
                 arr[i]= -arr[i];
             } 
         
             int max_circular =arr_sum+normalSubarraySum(arr,num);
           
         return max(max_circular,max_normal);

         }

int main(){
    int arr[]={1,2,3,-4,5};
    int n=5;
    int z=circularSubarraySum(arr,n);
    cout<<z<<endl;
    return 0;

}