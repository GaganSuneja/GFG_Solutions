#include <iostream>
#include <vector>
using namespace std;

#define ff(x,N) for(int i = x ; i < N ; i++) 

int maxElement(int arg1 , int arg2){

 if(arg1>=arg2) return arg1;

 return arg2;

}
int minElement(int arg1 , int arg2){

 if(arg1<=arg2) return arg1;

 return arg2;

}

int main(){
    
    int noOfElem,in[100],out[100],max,min,inBetween;

    cin>>noOfElem;
    
    ff(0,noOfElem){ cin>>in[i] ; }

    for( int i = 1; i<noOfElem ;i+=2 ){
       
       int maxElem = maxElement(in[i-1],maxElement(in[i],in[i+1]));

       //int minElem = minElement(in[i-1],minElement(in[i],in[i+1]));
       // use swapping and interate one by one
       

       in[i] = maxElem ; in[i-1] = minElem ; in[i+1] = inBetween;

    }

    ff(0,noOfElem) { cout<<in[i]<<" " ;}

    return 0;
}