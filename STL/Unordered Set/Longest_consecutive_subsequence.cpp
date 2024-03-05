#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findLongestConseqSubseq(int arr[], int N)
    {
      
      int res=0;
      int curr;
      unordered_set<int>s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
          
      }
      for(int i=0;i<N;i++){
          if(s.find(arr[i]-1)!=s.end()){
              curr=1;
              while(s.find(arr[i]+curr)!=s.end()){
                  curr++;
              }
              res=max(res,curr);
          }
      }
      return (res+1);
    }

    int main(){
        int arr[]={1,1,2,3,4,5,6};
        int n=7;
        int x=  findLongestConseqSubseq(arr,n);
        cout<<x<<endl;

        return 0;
    }
