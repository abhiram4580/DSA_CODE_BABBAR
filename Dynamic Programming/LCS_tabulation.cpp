#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LCS(string a,string b,int m,int n){
    int mat[m+1][n+1];
    for(int i=0;i<=m;i++){
        mat[i][0]=0;
    }
    for(int i=0;i<=n;i++){
        mat[0][i]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i-1]==b[j-1]){
                mat[i][j]=1+mat[i-1][j-1];
            }
            else{
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }

    return mat[m][n];
}


int main(){
    string a="ABCDGH";
    string b="AEDFHR";
    int m=6;
    int n=6;
    cout<<LCS(a,b,m,n)<<endl;
    return 0;
}
    