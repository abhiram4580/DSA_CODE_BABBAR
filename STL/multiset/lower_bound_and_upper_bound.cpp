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
auto it1=ms.upper_bound(10);
auto it2=ms.lower_bound(20);
cout<<(*it1)<<endl;
cout<<(*it2)<<endl;
return 0;


}