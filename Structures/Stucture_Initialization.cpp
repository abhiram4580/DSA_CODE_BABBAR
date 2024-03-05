#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x;
    int y;
    Point(){
        x=4;
        y=5;
    }
};

int main(){
    Point p;
    cout<<p.x<<endl;
    cout<<p.y<<endl;
    return 0;
}