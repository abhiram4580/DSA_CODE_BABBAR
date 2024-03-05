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
auto it=ms.equal_range(20);
cout<<*it.first<<endl;
cout<<*it.second<<endl;
return 0;


}