#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x;
    int y;
    public:
       Point(): x(0),y(0){

       }
       Point(int x1,int y1):x(x1),y(y1){

       }
       void Print(){
        cout<<x<<" "<<y<<endl;
       }
};

int main(){
    Point p1,p2(20,30);
    p1.Print();
    p2.Print();
    return 0;
}
