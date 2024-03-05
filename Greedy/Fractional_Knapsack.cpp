#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int>a,pair<int,int>b){
   double res1= (double)a.first/a.second;
   double res2=(double)b.first/b.second;
   return res1>res2;
}

int FractionalKnapSack(vector<pair<int,int>>arr,int n,int w){
    int res=0;
    sort(arr.begin(),arr.end(),mycmp);
        for(int i=0;i<n;i++){
            if(arr[i].first<=w){
                res=res+arr[i].second;
                w=w-arr[i].first;
            }
            
            else{
                 res=res+(w/arr[i].first)*arr[i].second;
                 break;
            }
            
        }

    return res;
    
}

int main(){
    vector<pair<int,int>>v={{50,600},{20,500},{30,400}};
    int n=v.size();
    int w=70;
    int res=FractionalKnapSack(v,n,w);
    cout<<res<<endl;
    return 0;
}