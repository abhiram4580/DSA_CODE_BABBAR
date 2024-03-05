#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int sum){
    int answer[n+1][sum+1];
    for(int i=0;i<=sum;i++){


        answer[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        answer[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                answer[i][j]=answer[i-1][j-arr[i-1]] || answer[i-1][j];
            }
            else{
                answer[i][j]=answer[i-1][j];
            }
        }
    }
    return answer[n][sum];
}


int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    int sum;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
    cout<<"Enter the array Values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The answer is:"<<endl;
    if(solve(arr,n,sum)==1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;

    }
    return 0;
}