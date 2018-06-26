#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n = 3;
    vector<int> vect(n,10);
    vect.push_back(5);
    vect.push_back(7);
    
    for(int i=0;i<vect.size();i++)
      cout<<vect[i]<<" ";
    
    vector<int > :: iterator  a;
    a = remove(vect.begin(),vect.end(),10);

     cout<<"iterator value"<<*a<<endl;
    
    vect.erase(a,vect.end());
    for(int i=0;i<vect.size();i++)
      cout<<vect[i]<<" ";
    return 0;
}
