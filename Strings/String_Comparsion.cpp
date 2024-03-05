#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[]="Abhiram";
    char s2[]="Abhinav";
    int x=strcmp(s1,s2);
    if(x==0){
        cout<<"Equal"<<endl;
    }
    else if(x>0){
        cout<<"Greater"<<endl;
    }
    else{
        cout<<"Smaller"<<endl;
    }

    return 0;
}