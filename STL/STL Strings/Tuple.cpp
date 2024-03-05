#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple<string,int,string>t{"abhiram",1,"dheeraj"};
    cout<<get<0>(t)<<endl;
    cout<<get<1>(t)<<endl;
    cout<<get<2>(t)<<endl;
    get<0>(t)="charan";
    cout<<get<0>(t)<<endl;
    return 0;
}