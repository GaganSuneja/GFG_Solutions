#include <bits/stdc++.h>
using namespace std;
#define inN  int n;cin>>n;
#define tc int testCases;cin>>testCases;while(testCases){;

int nextHappyNumber(int n,set <int> &s){

    if(n == 1){
        cout<<"is a hp n";
        return 0;
    }

    if(s.find(n)!=s.end()){
        cout<<"not true at "<<n<<endl;
        return -1;
    }

    int temp = n;
    int sum = 0;
    
    while(temp!=0){
        int rem = temp%10;
        temp = temp/10;
        sum += pow(rem,2);
    }
    cout<<"sum is "<<sum<<endl;
    s.insert(sum);

    return nextHappyNumber(sum,s);


}

int main(){
    
    inN;
    set <int> s;
    cout<<nextHappyNumber(n,s);
    s.clear();
    return 0;
}