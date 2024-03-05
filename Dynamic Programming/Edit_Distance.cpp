#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int editDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            dp[i][0]=i;
            
        }
        for(int j=0;j<m+1;j++){
            dp[0][j]=j;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if((s[i-1]==t[j-1])){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
        return dp[n][m];
        
        
    }

    int main(){
        string a="geek";
        string b="gesek";
        cout<<editDistance(a,b)<<endl;
        return 0;
        }