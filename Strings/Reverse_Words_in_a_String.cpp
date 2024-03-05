#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char s[],int low ,int high){
    while(high>=low){
        swap(s[high],s[low]);
        high--;
        low++;
    }
}

void ReverseWord(char s[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }

    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}



int main(){
    char s[]="My name is Abhiram Naidu";
    int n=24;
    ReverseWord(s,n);
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;

}

