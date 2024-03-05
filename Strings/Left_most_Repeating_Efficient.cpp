#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LeftMost(string &str){
    const int CHAR=256;
    bool visited[CHAR]={false};
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]]){
            return i;
        }
        else{
            visited[str[i]]=true;
        }
    }
return -1;

}

int main(){
    string str="lbhairam";
    int x=LeftMost(str);
    cout<<x<<endl;
    return 0;
}