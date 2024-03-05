#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        
        stack<int>s;
        int i=0;
        int j=0;
        
        for(j=0;j<N;j++){
           s.push(A[j]);
           while(s.empty()==false && B[i]==s.top()){
               s.pop();
               i++;
           }
           
           
           
        }
        if(i==N){
            return 1;
            
        }
        return 0;
        
    }

int main(){
    vector<int>v1{1,2,3,4};
    vector<int>v2{2,1,3,4};
    int n=v1.size();
    int x=isStackPermutation(n,v1,v2);
    cout<<x<<endl;
    return 0;

}

