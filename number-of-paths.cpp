#include <bits/stdc++.h>
using namespace std;
#define tc int testCases;cin>>testCases;

void printPath(int i,int j,int row,int col,int &path){

    if(i>row){
        return;
    }
    if(j>col){
        return;
    }

    if((i == row) && (j == col)){
        path++;
        
        return;
    }
    printPath(i+1,j,row,col,path);
    printPath(i,j+1,row,col,path);
}


int main(){
    tc;
    while(testCases){
        int m,n;
        cin>>m>>n;
        int path = 0;
        printPath(0,0,m-1,n-1,path);
        cout<<path<<endl;
        --testCases;
    }
    return  0 ;
}