#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Maximumsum(int arr[],int n) {
	// your code goes here
	
	
	
	    
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        
	        v.push_back(arr[i]);
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    long long sum=0;
	    for(int i=0;i<n;i+=2){
	        sum=sum+arr[i];
	    }
	    cout<<sum<<endl;
	    
	
	return sum;
}


int main(){
    int arr[]={1,2,1};
    int n=3;
    int x=Maximumsum(arr,n);
    cout<<x<<endl;
    return 0;
}