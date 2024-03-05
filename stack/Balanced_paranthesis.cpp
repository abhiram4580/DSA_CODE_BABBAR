#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool Matching(char a,char b){
    return ((a=='('&& b==')')|| (a=='{' && b=='}') || (a=='[' && b==']'));
}


bool isBalanced(string s){
    stack<char>k;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='['|| s[i]=='('){
            k.push(s[i]);
        }
        else { 
            if(k.empty()==true){
                return false;
            }
            else if(Matching(k.top(),s[i])==false){
                return false;
            }
           
            else{
                k.pop();
            }
        }
    }
    return (k.empty()==true);
}

int main(){
    string s=")";
    bool l=isBalanced(s);
    cout<<l<<endl;

  return 0;

}