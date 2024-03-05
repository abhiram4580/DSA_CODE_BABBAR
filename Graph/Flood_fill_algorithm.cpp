 #include<bits/stdc++.h>
 #include<iostream>
 using namespace std;


 void Flood(vector<vector<int>>&image,int i,int j,int color,int oldcolor,int m,int n){
        image[i][j]=color;
        if(i+1<m){
            if(image[i+1][j]==oldcolor && color!=oldcolor){
                
                Flood(image,i+1,j,color,oldcolor,m,n);
            }

         }
         if(i-1>=0){
             if(image[i-1][j]==oldcolor and color!=oldcolor){
                 
                 Flood(image,i-1,j,color,oldcolor,m,n);
             }
         }
         if(j+1<n){
            if(image[i][j+1]==oldcolor && color!=oldcolor){
             
                Flood(image,i,j+1,color,oldcolor,m,n);
            }

         }
         if(j-1>=0){
             if(image[i][j-1]==oldcolor && color!=oldcolor){
                 
                 Flood(image,i,j-1,color,oldcolor,m,n);
             }
         }
         
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
        int color=newColor;
        int m=image.size();
        int src=sr;
        int oldcolor=image[sr][sc];
        int n=image[0].size();
        Flood(image,src,sc,color,oldcolor,m,n);
        return image;
    }


    int main(){
        vector<vector<int>>matrix;
        vector<int>v3{1,1,1};
        vector<int>v1{1,1,0};
        vector<int>v2{1,1,0};
        matrix.push_back(v3);
        matrix.push_back(v1);
        matrix.push_back(v2);
        int sr=1;
        int sc=1;
        vector<vector<int>>v;
        int newColor=2;
        vector<vector<int>>ans=floodFill(matrix,sr,sc,newColor);
        int m=ans.size();
        int n=ans[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }