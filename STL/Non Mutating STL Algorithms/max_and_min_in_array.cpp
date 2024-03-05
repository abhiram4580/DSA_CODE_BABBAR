#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<*max_element(arr,arr+5)<<endl;
    cout<<*min_element(arr,arr+5)<<endl;

return 0;
}