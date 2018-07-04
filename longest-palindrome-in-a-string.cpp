#include<bits/stdc++.h>
using namespace std;

void getPalindrome(string s,int start,int end){
    int orgStart = start;
    int orgEnd = end;

    if((end-start)%2==0){
        int ofIndex = ((end-start)%2)+1;int gap = 2;
    }else{
        int ofIndex = (end-start)%2;int gap = 0;
    }

    while((end-start)!=gap){
       if(s[start]!=s[end]){
          
           int l1 = getPalindrome(s,orgStart,end);

           int l2 = getPalindrome(s,start,orgEnd);
           
           break;

       }else{
           ++start;
           --end;
       }
    }

    return (l1>l2)?l1:l2;
}

int main(){
    
    string a;
    getline(cin,a);
    cout<<a.size();
    int start = 0;
    int end = size-1;
    getPalindrome(a,0,size-1);    
    return 0;
}
