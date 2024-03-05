#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Mystack{
    vector<int>v;

    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    bool IsEmpty(){
        return v.empty();
    }
};

int main(){
    Mystack s;
    s.push(4);
    s.push(5);
    s.pop();
    int x=s.size();
    int y=s.IsEmpty();
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}


