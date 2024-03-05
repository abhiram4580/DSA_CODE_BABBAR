#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
     int x;
    public:
      Base(int a):x(a){
          cout<<"Base"<<endl;
      }
      
};

class Derived:public Base{
    public:
      int y;
    public:
    Derived(int a,int b): Base(a),y(b){
        cout<<"Derived"<<endl;
    }
    void Print(){
    cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Derived d(10,20);
    d.Print();
    return 0;
}