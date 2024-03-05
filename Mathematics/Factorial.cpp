#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
         fact=fact*i;
    }
    return fact;
}

int main(){
    int n=5;
   cout<<Factorial(n)<<endl;

   return 0;

}

/* Recursive Implementation

    if(n==1){
        return 1;

    }
    else{
        return n*fact(n-1);
    }

*/