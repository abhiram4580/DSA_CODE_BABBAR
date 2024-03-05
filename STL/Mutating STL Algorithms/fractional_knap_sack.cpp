#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool MyCmp(pair<int,int>a,pair<int,int>b){
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2;
}

double KnapSack(int W,pair<int,int>arr[],int n){
   sort(arr,arr+n,MyCmp);
   double res=0;
   for(int i=0;i<n;i++){
    if(arr[i].second<=W){
        res=res+arr[i].first;
        W=W-arr[i].second;
    }
    else{
        res=res+arr[i].first * (double)W/arr[i].second;
        break;
    }

    
   }

   return res;
}

int main(){
   int arr[]={(600,50),(500,20),(400,30)};
   int n=3;
   double l= KnapSack(70,*arr,n);
   cout<<l<<endl;

   return 0;

}