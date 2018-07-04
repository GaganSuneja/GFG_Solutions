#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool  sort_second_key_dec( pair<int,int> a , pair<int,int> b ){
    if(a.second == b.second){
        return a.first<b.first;
    }
    
    return a.second>b.second;
}

struct set_cmp{

    bool operator() ( pair<int,int> &a, pair<int,int> &b ){
        
        
        return a.second>b.second;
    }
};

int main(){

    int a[10000] , testCases,noOfElem;
    
    map<int,int> mp1;
    map<int,int> :: iterator it;
    vector < pair <int,int> > v;
    vector < pair<int,int> > :: iterator v_it;
    
    cin>>testCases;
    
    while(testCases){
        cin>>noOfElem;

        for(int i = 0 ; i<noOfElem; i++) cin>>a[i];
        
        for(int i = 0;i<noOfElem;i++){
            if(mp1.find(a[i]) == mp1.end()){
                mp1[a[i]] = 1;
            }
            else{
                mp1[a[i]]++ ;
            }
        }

       for(it = mp1.begin(); it!=mp1.end(); it++)
          v.push_back(make_pair(it->first,it->second));
 
        for(v_it = v.begin() ; v_it != v.end() ; v_it++)
            cout<<"first"<<v_it->first<<"second"<<v_it->second<<endl;
        
        sort(v.begin(),v.end(),sort_second_key_dec);
            
        
        for(v_it = v.begin() ; v_it != v.end() ; v_it++)
            for(int k = v_it->second;k>0;k--)
                cout<<v_it->first<<" ";      
        
        v.clear();
        mp1.clear();
        cout<<endl;
        --testCases;
    }

    return 0;
}