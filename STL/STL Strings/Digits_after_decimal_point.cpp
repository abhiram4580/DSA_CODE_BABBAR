#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string digitsafterDecimal(string &no){
    int pos=no.find(".");
    if(pos==string ::npos){
        return " ";
    }
    else{
        return no.substr(pos+1);
    }
}

int main(){
    string s="10.445";
   string z= digitsafterDecimal(s);
   cout<<z<<endl;
   return 0;
}