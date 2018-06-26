#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define ff(x,N) for(int i=x;i<N;i++);
using namespace std;

int cmp(int x1,int x2){
    return x2>x1;

}

int main(){
    
    map <int,int> q1;
    vector<int> in1,in2;
    int testCases,noOfElem1,noOfElem2,elem,count = 0;
    vector<int> ::  iterator  it;
    cin>>testCases;

    while(testCases){
        
        cin>>noOfElem1>>noOfElem2;

        for(int i=0;i<noOfElem1;i++) {cin>>elem; in1.push_back(elem);}
       
        for(int i=0;i<noOfElem2;i++) {cin>>elem; in2.push_back(elem);}


        for(int i = 0 ; i<noOfElem2; i++){
            
            for(int j = 0 ; j<noOfElem1; j++){
                if(in2[j] == in1[i]) count++ ;
                elem = in2[j];
            }
            q1.insert(make_pair(elem,count));
            count = 0;
        }
          
        vector <int> :: iterator b;

        it = remove(in1.begin(),in1.end(),3);

        cout<<"iterator after remove"<<*it;   

        // for(int i = 0;i<noOfElem2 ; i++){
        //     for(it = in1.begin();it!=in1.end();it++){
        //         if(*it == in2[i])   in1.erase(it);
        //     }
        // }

        // for(it = in1.begin();it!=in1.end();it++) cout<<*it<<endl;
        
        // sort(in1.begin(),in1.end(),cmp);
        
        // cout<<"after sorting"<<endl;
        
        // for(it = in1.begin();it!=in1.end();it++) cout<<*it<<endl;

        --testCases;
    }

    // q1.insert(make_pair(5,10));
    // q1.insert(make_pair(0,0));
    // q1.insert(make_pair(3,30));






    // map<int , int> :: iterator it; 
    // for(it = q1.begin();it!=q1.end();++it) cout<<it->first<<"  value"<<it->second<<endl;
    
    return 0;
}