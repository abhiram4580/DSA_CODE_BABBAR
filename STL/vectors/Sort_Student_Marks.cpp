#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool  static  MyCmp(pair<int,int>p1,pair<int,int>p2){
    return (p1.second>p2.second);
}
void PrintSortedMarks(int roll[],int marks[],int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({roll[i],marks[i]});
    }
    sort(v.begin(),v.end(),MyCmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
        cout<<endl;
    }
}

int main(){
    int roll[]={1,2,3,4,5};
    int marks[]={45,87,98,11,33};
    int n=5;
    PrintSortedMarks(roll,marks,n);
    return 0;
}