#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
      int x;
};
class B: virtual public A{};
class C:virtual public A{};
class D: public B,public C{};

int main(){
   D d;
   cout<<d.x<<endl;

   return 0;
}