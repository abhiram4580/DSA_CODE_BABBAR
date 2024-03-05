#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
multiset<int>ms;
ms.insert(10);
ms.insert(20);
ms.insert(30);
ms.insert(10);
ms.insert(30);
for(auto x:ms){
    cout<<x<<endl;



}
return 0;


}