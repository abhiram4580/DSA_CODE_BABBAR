#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
       int x,y;
    public:
       Point(){
        x=0;
        y=0;
       }
       Point(int x1,int y1){
        x=x1;
        y=y1;
       }
    void print(){
        cout<<x<<" "<<y<<endl;
    }

};

int main(){
    Point p1,p2(2,3);
    p1.print();
    p2.print();
    Point *ptr=new Point(2,8);
    ptr->print();
    return 0;
}