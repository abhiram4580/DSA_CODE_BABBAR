#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<long long,int>mp;
        long long sum=0;
        int maxlen=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                maxlen=max(i+1,maxlen);
            }
        
        int rem=sum-K;
        if(mp.find(rem)!=mp.end()){
            int len=i-mp[rem];
            maxlen=max(maxlen,len);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        
        }
        return maxlen;
        
    } 
int main(){
    int arr[]={10,5,2,7,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=15;
    cout<<lenOfLongSubarr(arr,n,k)<<endl;
    return 0;
}