#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printN(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printN(n-1);

}

int main(){
    printN(6);

return 0;
}
