#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Interval{
    int start,end;
};

bool compare(Interval i1,Interval i2){
    return i1.end<i2.end;
}

int maxNonOverlapping(Interval arr[],int n){
    sort(arr,arr+n,compare);
    int res=1;
    int prev=0;
    for(int curr=1;curr<n;curr++){
        if(arr[curr].start>=arr[prev].end){
            res++;
            prev=curr;
        }
    }
    return res;
}

int main(){
    Interval arr[]={{1,2},{2,3},{3,4},{1,3}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxNonOverlapping(arr,n)<<endl;
    return 0;
}