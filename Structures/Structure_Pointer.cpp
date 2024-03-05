#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x;
    int y;
};

int main(){
    Point P={10,20};
    Point *ptr=&P;
    cout<<ptr->x<<endl;
    ptr->x=30;
    cout<<P.x<<endl;

    return 0;
}