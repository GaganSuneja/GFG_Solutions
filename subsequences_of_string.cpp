#include <bits/stdc++.h>
using namespace std;

void subsequences(char a[],char out[],int start,int start2,int end){
    if(a[start] == '\0'){
        out[start2] = '\0';
        cout<<out<<endl;
        return;
    }
    out[start2] = a[start];
    subsequences(a,out,start+1,start2+1,end);

    out[start2] = '\0';
    subsequences(a,out,start+1,start2,end);
}

int main(){
    char a[10] = "abc";
    char out[10] = "";
    subsequences(a,out,0,0,3);
    return  0;
}
// 0124000100016504 punb0012400