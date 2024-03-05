#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CountDigits(int N){
    if(N==0){
        return 0;
    }
    else{
        return 1+CountDigits(N/10);
    }
}

int main(){
    int N=40;
   int x= CountDigits(N);
   cout<<x<<endl;

   return 0;
}