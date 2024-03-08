class Solution {
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>str;
        string ans="";
        int sum=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=']'){
                if(s[i]>='0' && s[i]<='9'){
                    sum=sum*10+(s[i]-'0');
                    if(i+1<n && (s[i+1]<'0' || s[i+1]>'9')){
                        num.push(sum);
                        sum=0;
                    }
                    
                }
                else{
                    
                    sum=0;
                   str.push(string(1, s[i]));
                }
            }
            else{
                while(str.top()!="["){
                    string x=str.top();
                    ans=x+ans;
                    str.pop();
                }
                str.pop();
                int x=num.top();
                num.pop();
                string final="";
                for(int i=0;i<x;i++){
                  final=ans+final;
                }
                str.push(final);
                ans="";
            }
        }
        string fin="";
        while(str.empty()==false){
           fin=str.top()+fin;
           str.pop();
        }
       
        return fin;
    }
};