#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
map<int,int>m;
m.insert({1,200});
cout<<m[20]<<endl;
m[1]=2000;
for(auto x:m){
    cout<<x.first<<endl;
    cout<<x.second<<endl;

}
return 0;


}