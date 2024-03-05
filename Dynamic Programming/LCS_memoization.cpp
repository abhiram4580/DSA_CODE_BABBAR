#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int LCS(string a,string b,int m,int n,int mat[1000][1000]){
   if(n==0 || m==0){
    mat[m][n]=0;
   }
   if(mat[m][n]!=-1){
        return mat[m][n];
   }
   else if(a[m-1]==b[n-1]){
       mat[m][n]=1+LCS(a,b,m-1,n-1,mat);
   }
   else{
      mat[m][n]=max(LCS(a,b,m-1,n,mat),LCS(a,b,m,n-1,mat));

}
return mat[m][n];
}

int main(){
    int mat[1000][1000]={-1};
    string a="ABCDGH";
    string b="AEDFHR";
    int m=6;
    int n=6;
    cout<<LCS(a,b,m,n,mat)<<endl;
    return 0;
}