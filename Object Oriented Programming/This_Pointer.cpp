#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Point{
    int x;
    int y;
    public:
      Point(int x1,int y1){
        this->x=x1;
        this->y=y1;
      }

    void Print(){
        cout<<x<<" "<<y<<endl;
    }



};
 
 int main(){
    Point p1(20,30);
    p1.Print();
 }