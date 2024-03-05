#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

bool AreSame( int CT[],int CP[]){
    for(int i=0;i<256;i++){
        if(CT[i]!=CP[i]){
            return false;
        }
    }
    return true;
}

bool AnagramSearch(string &str,string &pat){
    int CT[CHAR]={0};
    int CP[CHAR]={0};

   for(int i=0;i<pat.length();i++){
     CT[str[i]]++;
     CP[pat[i]]++;

   }

   for(int i=pat.length();i<str.length();i++){
    if(AreSame(CT,CP)){
        return true;
    }
    CT[str[i]]++;
    CT[str[i-pat.length()]]--;
   }
   return false;
}

int main(){
    string str="geeksforgeeks";
    string pat="frog";
    int x=AnagramSearch(str,pat);
    cout<<x<<endl;
    return 0;
}