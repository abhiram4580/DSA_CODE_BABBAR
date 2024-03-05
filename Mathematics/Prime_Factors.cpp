#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrimeFactors(int n){
    if(n<=1){
        return ;
    }
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<endl;
            n=n/i;
        }

    }
    if(n>1){
        cout<<n<<endl;
    }

}

int main(){
    int n=84;
    PrimeFactors(n);
    return 0;
}