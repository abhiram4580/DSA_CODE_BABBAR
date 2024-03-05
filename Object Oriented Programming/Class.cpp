#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class complex
{
   private:
      int real;
      int imag;

   public:
      
      complex(int r,int i){
        real=r;
        imag=i;
      }
      void Print(){
        cout<<real<<"+i"<<imag<<endl;
   
      }
      
};

int main(){
    complex c1(12,13);
    c1.Print();
    return 0;
}