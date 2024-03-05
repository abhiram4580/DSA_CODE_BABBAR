#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int RecBinsea(int a[],int l,int h,int x){
    
    if(l<=h){
        int m=(l+h)/2;
        if(a[m]==x){
            return m;
        }
        if(a[m]>x){
            return RecBinsea(a,l,m-1,x);
        }
        return RecBinsea(a,m+1,h,x);
    }
    return -1;
}

int main(){
     int a[]={1,2,3,4,5};
     int l=0;
     int h=4;
     int x=4;
     int z=RecBinsea(a,l,h,x);
     if(z==-1){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"The position is "<<z<<endl;
     }

return 0;
}