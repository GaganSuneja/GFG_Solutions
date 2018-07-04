#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool cmp(int a , int b){
    return a<b;
}

bool hasPyTrip(vector<int> v){
     for(int i = 0;i<v.size()-2;i++)
          for(int j = i+1 ;j<v.size()-1;j++)
             for(int k = j+1;k<v.size();k++)
                if((v[i]*v[i])+(v[j]*v[j])==(v[k]*v[k]))
                    return true;
      return false;          
}

int main(){
    
    vector<int> a;
    int testCases=0,noOfElem=0,elem=0;
    cin>>testCases;
    while(testCases){
        cin>>noOfElem;
        
        for(int i = 0;i<noOfElem;i++){
            cin>>elem;
            a.push_back(elem);
        }
       
        sort(a.begin(),a.end(),cmp);

        if(hasPyTrip(a)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    
    a.clear();
    --testCases;
    }
    return 0;
}