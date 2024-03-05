#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Test{
    int x;
    public:
       Test(int i): x(i){
        cout<<"Constructor"<<x<<endl;
       }
       ~Test() {
        cout<<"Destructor"<<x<<endl;
       }
       

};

int main(){
    Test t1(20);
    
    Test t2(10);
   
    return 0;
}