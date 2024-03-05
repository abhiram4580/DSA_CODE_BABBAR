#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMaxLen(string s) {
        // code here
        int ans=0;
        
        stack<int>st;
        st.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                   ans=max(ans,i-st.top());
                   
                }
            }
        }
        return ans;
}

int main(){
    string s="(()(";
    int x=findMaxLen(s);
    cout<<x<<endl;
    return 0;
}