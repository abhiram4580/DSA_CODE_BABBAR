#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    srand(time(NULL));
    for(int i=0;i<5;i++){
        cout<<rand()%100<<endl;
    }

    return 0;
}