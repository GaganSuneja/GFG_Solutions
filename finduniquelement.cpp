#include <iostream>
#include <vector>
using namespace std;
#define ff(x,N) for(int i = x;i<N;i++);

int main(){
    

    vector <int> in;
    int testCases,noOfElem,flag=7,elem;
    cin>>testCases;
   
    while(testCases){ 
      
        cin>>noOfElem;
        for(int i=0;i<noOfElem;i++){ cin>>elem; in.push_back(elem); }
        for(int i=0;i<noOfElem;i+=2){
            if(i==noOfElem){break;}
           
            if(in[i] != in[i+1]){
                // cout<<"XOR is not 0 at  "<<i<<endl;
                if(i==0){cout<<in[i]<<endl; break;}
                else if(in[i+1]==in[i+2]) {cout<<in[i]<<endl;break;}
                else if(in[i]==in[i-1]) {cout<<in[i+1]<<endl;break;}        
                flag ==1;
            }
        }

        if(!flag){
            if(in[noOfElem]!=in[noOfElem-1]){cout<<in[noOfElem]<<endl;}
            // else{cout<<"all are unique"<<endl;}
        }

        in.clear();
        --testCases;
    }
    return 0;
}