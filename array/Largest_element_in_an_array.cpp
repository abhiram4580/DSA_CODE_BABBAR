#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LargestEle(int a[],int n){
   int count=INT_MIN;
   for(int i=0;i<n;i++){
      if(a[i]>count){
        count=a[i];
      }
   }
   cout<<count<<endl;

return count;


}

int main(){
    int a[]={1,23,3,4,5};
    int n=5;
    LargestEle(a,n);

return 0;
}