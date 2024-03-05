#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1[]={1,2,3,4,5};
    int a2[]={5,4,3,2,1};
    if(is_permutation(a1,a1+5,a2)){
        cout<<"Yes"<<endl;
    
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}