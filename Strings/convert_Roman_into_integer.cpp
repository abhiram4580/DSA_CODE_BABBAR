#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int romanToDecimal(string &str) {
        // code here
     unordered_map<char,int>mp;
     mp['I']=1;
     mp['V']=5;
     mp['X']=10;
     mp['L']=50;
     mp['C']=100;
     mp['D']=500;
     mp['M']=1000;
     
     
     int n=str.length();
     int sum=mp[str[n-1]];
     for(int i=n-2;i>=0;i--){
         if(mp[str[i+1]]<=mp[str[i]]){
             sum=sum+mp[str[i]];
         }
         else{
             sum=sum-mp[str[i]];         }
     }
     return sum;
    }

    int main(){
        string str="XXXIX";
        int x=romanToDecimal(str);
        cout<<x<<endl;
        return 0;
        
    }