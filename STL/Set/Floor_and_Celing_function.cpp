#include<iostream>
#include<set>
using namespace std;


void function(int arr[],int n){
set<int>s;
int getFloor(int x)
{
    auto it=s.lower_bound(x);
    if(it==s.begin()){
        if(*it==x){
            return x;
        }
        else{
            return INT_MIN;
        }
    }
    else{
        if((it)!=s.end() && *it==x){
            return x;
        }
        it--;
        return *it;
    }

}

int getCeiling(int x){
    auto it=s.lower_bound(x);
    if(it==s.end()){
        return INT_MAX;
    }
    else{
        return *it;
    }
}
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    set<int>s;
    s.insert(20);
    s.insert(30);
    s.insert(60);
   int x=getFloor(30);
   cout<<x<<endl;


}

