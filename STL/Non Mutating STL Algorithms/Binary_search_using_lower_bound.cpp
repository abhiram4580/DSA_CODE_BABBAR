#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    auto it=lower_bound(arr,arr+5,3);
    if(it==(arr+6)){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at "<<(it-arr)<<endl;
    }
return 0;
}