#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["Abhiram"]=458;
    m["Dheeraj"]=464;
    m["Charan"]=1258;
    m.insert({"Rahul",462});
    if(m.find("Abhiram")!=m.end()){
        cout<<"Found"<<endl;

    }
    else{
        cout<<"Not Found"<<endl;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<((*it).first)<<" "<<(*it).second<<endl;

    }

    return 0;

}