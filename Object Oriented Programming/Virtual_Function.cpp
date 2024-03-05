#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void Print(){
    cout<<"Base Class"<<endl;
    }
};

class Derived:public Base{
    public:
    void Print(){
    cout<<"Derived Class"<<endl;
    }
};

int main(){
    Base b;
    Derived d;
    b.Print();
    d.Print();
    Base *ptr=&b;
    ptr->Print();
    return 0;

}