#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string longestPalin (string S) {
        string s=S;
        
        string str = "";
        int n = s.size();
        for(int i=0;i<n;i++) {
            
            int start = i-1;
            int end = i+1;
            
            while(start >= 0 && end < n && s[start] == s[end]) {
                start--;
                end++;
            }
            
            if(str.length() < end-start-1)
                str = s.substr(start+1, end-start-1);
                
            
            
            start = i;
            end = i+1;
            
            while(start >=0 && end < n && s[start] == s[end]) {
                start--;
                end++;
            }
            
            if(str.length() < end-start-1)
                str = S.substr(start+1, end-start-1);
        }
        
        return str;
    }