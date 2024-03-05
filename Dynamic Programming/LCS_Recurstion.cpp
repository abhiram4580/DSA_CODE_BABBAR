#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LCS(string a,string b,int m,int n){
    if(m==0|| n==0){
       return 0;
    }
     if(a[m-1]==b[n-1]){
        return 1+LCS(a,b,m-1,n-1);
    }
    else{
        return max(LCS(a,b,m,n-1),LCS(a,b,m-1,n));
    }

}


int main(){
    string a="ABCDGH";
    string b="AEDFHR";
    int m=6;
    int n=6;
    cout<<LCS(a,b,m,n)<<endl;


}



