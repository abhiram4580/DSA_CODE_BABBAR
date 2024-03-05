#include<iostream>
#include<queue>
using namespace std;
int main(){
int arr[]={1,2,3,4,9};
int n=5;
int sum=9;
priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
int res=0;
while(sum>=0 && pq.empty()==false && pq.top()<=sum){
    sum=sum-pq.top();
    pq.pop();
    res++;
}
cout<<res<<endl;
return res;

}

