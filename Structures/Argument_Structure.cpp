#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Point{
   int x;
   int y;;
};

void Print(Point P){
    cout<<P.x<<" ";
    cout<<P.y<<endl;
}

int main(){
    Point P={10,20};
    Print(P);
    return 0;
}
