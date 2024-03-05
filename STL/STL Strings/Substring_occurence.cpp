#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PosSearch(string X,string Y){
    int pos=X.find(Y);
    while(pos!=string ::npos){
        cout<<pos<<" ";
        pos=X.find(Y,pos+1);

    }
}

int main(){
    string X="abhiram rao";
    string Y="ra";
    PosSearch(X,Y);
    return 0;
}