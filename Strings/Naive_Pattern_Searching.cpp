#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SearchPat(string &str,string &pat){
    int m=pat.length();
    int n=str.length();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=str[i+j]){
                break;
            }
            
        }
        if(j==m){
                cout<<i<<endl;
            }
    }
    
}

int main(){
   string str="Abhiram";
   string pat="ram";
   SearchPat(str,pat);
   
   return 0;
}