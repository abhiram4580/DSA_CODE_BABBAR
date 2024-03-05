#include<iostream>
#include<bits/stdc++.h>
using namespace std;

union test{
    int x;
    int y;

};

int main(){
    test t;
    t.x=20;
    cout<<t.x<<" "<<t.y<<endl;
    cout<<sizeof(test)<<endl;

    return 0;
}
