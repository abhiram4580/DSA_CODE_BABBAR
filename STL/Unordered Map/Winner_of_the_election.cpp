#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string FindWinner(string arr[],int n){
    unordered_map<string,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int max=0;
    string winner;
    for(auto x:m){
        if(x.second>max){
            max=x.second;
            winner=x.first;
        }
        else if((x.second==max) && (x.first<winner)){ // lexicographical checking.
            winner=x.first;
        }
    }

return winner;
}

int main(){
    string arr[]={"Abhiram","Charan","Dheeraj"};
    int n=3;
   string z= FindWinner(arr,n);
   cout<<z<<endl;

   return 0;

}