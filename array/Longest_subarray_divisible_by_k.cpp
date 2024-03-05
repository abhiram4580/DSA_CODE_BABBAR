#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>mp;
	    int sum=0;
	    int maxlen=0;
	    int len=0;
	    for(int i=0;i<n;i++){
	       sum=sum+arr[i];
	       if(sum%k==0){
	           maxlen=max(i+1,maxlen);
	       }
	       else{
	       int rem=sum%k;
	       if(rem<0){
	           rem=rem+k;
	       }
	       if(mp.find(rem)!=mp.end()){
	           len=i-mp[rem];
	           maxlen=max(maxlen,len);
	       }
	       if(mp.find(rem)==mp.end()){
	           mp[rem]=i;
	           
	       }
	       }
	       
	    }
	    return maxlen;
	    
	}


int main(){
    int arr[]={2,7,6,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<longSubarrWthSumDivByK(arr,n,k);
    return 0;
}
    
