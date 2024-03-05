#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Job 
{ 
    int id;	 
    int dead;  
    int profit; 
};



   
    
   static bool MyCmp(Job a,Job b){
        return a.dead<b.dead;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
       sort(arr,arr+n,MyCmp);
       int curr=1;
       priority_queue<int,vector<int>,greater<int>>pq;
       for(int i=0;i<n;i++){
           if(arr[i].dead>=curr){
               curr++;
               pq.push(arr[i].profit);
           }
           else{
               if(pq.top()<arr[i].profit){
                   pq.pop();
                   pq.push(arr[i].profit);
               }
           }
       }
       int sum=0;
       int noj=pq.size();
       while(!pq.empty()){
           sum=sum+pq.top();
           pq.pop();
           
       }
       return {noj,sum};
    }



int main(){
  
   struct Job j1[]={{1,4,20},
                    {2,1,10},
                    {3,1,40},
                    {4,1,30}};
   int n=4;
   vector<int>v=JobScheduling(j1,n);
   for(int x:v){
    cout<<x<<endl;
   }
   return  0;


   
  
}
    