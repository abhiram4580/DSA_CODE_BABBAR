#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Test{
    
    int *ptr;
    public:
       Test(int x){
        ptr=new int(x);
       }
       Test(const Test &t){
        int val=*(t.ptr);
        ptr=new int(val);
       }
       void Set(int x){
         *ptr=x;

       }
       void Print(){
        cout<<(*ptr)<<endl;
       }

       

};

int main(){
    Test t1(20);
    Test t2(t1);
    t2.Set(30);

    t1.Print();
    t2.Print();
    return 0;
}