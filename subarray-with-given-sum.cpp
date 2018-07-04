#include <bits/stdc++.h>
using namespace std;



int main(){
    
    int testCases,noOfElem=0,elem,sumToFind,currentSum=0,startIndex=0,endIndex=0,flag;
    vector<int> a;
    cin>>testCases;

    while(testCases){
        cin>>noOfElem>>sumToFind;
        flag=0; 
        for(int i=0;i<noOfElem;i++) {cin>>elem;a.push_back(elem);};
        
        startIndex=0;endIndex=0;
        currentSum = a[0];
       
        if(currentSum == sumToFind){
            endIndex = startIndex-1;
            flag=1;
        }
       
        while(endIndex>=startIndex){
            if(currentSum<sumToFind){
                endIndex++;
                currentSum+=a[endIndex];
            }else if(currentSum>sumToFind){
                currentSum-=a[startIndex];
                startIndex++;
            }else{
                flag=1;
                break;
            }
        }
        if(flag){cout<<startIndex+1<<" "<<endIndex+1<<endl;}
        else{cout<<"-1"<<endl;};
        a.clear();
        --testCases;
    }
    
    
    return 0;
}