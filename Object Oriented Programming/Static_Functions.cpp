#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
       static int count;
    public:
      Player(){
        count++;
      }
      ~Player(){
         count--;
      }
      static int getCount(){
        return count;
      }


};
  int Player::count=0;

  int main(){
    Player p1,p2;
    cout<<Player::getCount()<<endl;

    return 0;
  }