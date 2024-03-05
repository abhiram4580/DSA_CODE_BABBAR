#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    void Print(){
        cout<<"Base Class"<<endl;
    }

};

class Derived: public Base{
    public:
    void Print() override{
        cout<<"Derived"<<endl;
     }
};

int main(){
    Base *b=new Derived();
    b->Print();
    return 0;

}