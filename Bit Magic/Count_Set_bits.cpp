#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  CountSet(int n ){
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
return res;
}

int main(){
  int n=40;
  cout<<CountSet(n)<<endl;
  return 0;

}