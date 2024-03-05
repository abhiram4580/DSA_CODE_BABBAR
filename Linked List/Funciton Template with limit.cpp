#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T,int limit>
T arrMax(T arr[],int n){
	if(n>2){
		cout<<"Not Possible"<<endl;
	}
	T res=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>res){
			res=arr[i];
			
		}
	
	}
	return res;
}

int main(){
	int arr[]={10,20,3};
	cout<<arrMax<int,3>(arr,3);
	
	return 0;
}


