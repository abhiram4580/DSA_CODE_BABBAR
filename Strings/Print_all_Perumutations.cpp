#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Peru(string str,int i){
   if(i==str.length()-1){
    cout<<str<<" ";
   }
   for(int j=i;j<str.length();j++){
    swap(str[i],str[j]);
    Peru(str,i+1);
    swap(str[i],str[j]);
   }

}

int main(){
    string str="ABC";
    Peru(str,0);
    return 0;
}