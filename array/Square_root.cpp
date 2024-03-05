#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Squareroot(int x){
    int low=0;
    int high=x;
    int ans=-1;
    
    
    while(high>=low){
        int mid=(low+high)/2;
        int sq=mid*mid;
        if(sq==x){
            return mid;
        }
        else if(sq>x){
            high=mid-1;
        }
        else{
            low=mid+1;
            ans=mid;

        }
    
    }
    return ans;
}

int main(){
    int x=5;
    int z=Squareroot(x);
    cout<<z<<endl;

    return 0;
}