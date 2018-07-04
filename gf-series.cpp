#include <bits/stdc++.h>
using namespace std;
#define tc int testCases;cin>>testCases;while(testCases)
#define inN int n;cin>>n;

long long int gf_series(long long int n){

    if(n==2){
        return 1;
    }
    if(n==1){
        return 0;
    }

    return (pow(gf_series(n-2),2) - gf_series(n-1));
}
int main(){
    
    tc{
    inN;

        for(int i =1;i<=n;i++)
            cout<<gf_series(i)<<" ";
        cout<<endl;    
        --testCases;
    }

    return 0;
}