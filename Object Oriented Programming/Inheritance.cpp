#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
     int rollno;
     string name;
};

class Student:public Person{
    public:
    int marks;
    public:
    void Print(){
        cout<<rollno<<" "<<name<<" "<<marks<<endl;
    }
};
int main(){
   Student s1(2,"abhiram",98);
}
