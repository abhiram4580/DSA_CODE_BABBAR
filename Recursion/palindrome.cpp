#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalin(string str,int start,int end){
    if(start<=end){
        return true;
    }
    return((str[start]==str[end])&&(isPalin(str,start+1,end-1)));
}


int main(){
    isPalin("AAAB",0,2);

return 0;
}