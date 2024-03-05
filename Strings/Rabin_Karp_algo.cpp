#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RabinKarpAlgo(string str,string pat){
    int d=2;
    int h=1;
    int q=1000000000+7;
    int n=str.length();
    int m=pat.length();
    for(int i=1;i<=m-1;i++){
        d=(h*d)%q;
        
    }
    int t=0;
    int p=0;
    for(int i=0;i<=n-m;i++){
        t=(d*t+str[i])%q;
        p=(p*d+pat[i])%q;
    }
    for(int i=0;i<n;i++){
        
    if(p==t){
        bool flag=true;
        for(int j=0;j<m;j++){
            if(str[i+j]!=pat[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<i<<endl;
        }
    
    }
    if(i<n-m){
        t=(d*(t-str[i]*h)+str[i+m])%q;
        if(t<0){
            t=t+q;
        }
    }
    }
}


int main(){
    string str="Abhiram";
    string pat="ram";
    RabinKarpAlgo(str,pat);
    
    return 0;
}