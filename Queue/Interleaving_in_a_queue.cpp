#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeQueue(queue<int> &q){
        queue<int>q1;
        queue<int>q2;
        int n=q.size();
        for(int i=0;i<ceil(n/2);i++){
            q1.push(q.front());
            q.pop();
        }
        
            for(int i=0;i<n;i++){
                if(i%2==0){
                    q2.push(q1.front());
                    q1.pop();
                }
                else{
                    q2.push(q.front());
                    q.pop();
                }
            }
            if(q1.empty()==false){
                q2.push(q.front());
                q2.pop();
            }
            vector<int>v;
            for(int i=0;i<n;i++){
                v.push_back(q2.front());
                q2.pop();
            }
return v;
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    vector<int>v;
    v=rearrangeQueue(q);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
