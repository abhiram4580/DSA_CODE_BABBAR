#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Player{
    public:
    static int Count;
    Player(){
        Count++;
    }
   ~ Player(){
        Count--;
    }

};

int Player::Count=0;

int main(){
    Player p1;
    cout<<Player::Count<<endl;
    {
        Player p2;
        cout<<Player::Count<<endl;
    }
    cout<<Player::Count<<endl;
}