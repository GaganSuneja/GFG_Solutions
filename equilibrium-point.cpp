#include<iostream>
using namespace std;
#define tc int testCases;cout<<"yo"; while(testCases);
#define loop(i,x,N) for(int i = x;i<N;i++);

int main(){

    int noOfElem,testCases,a[100],j,sumLeft = 0, sumRight = 0,flag=0;
    cin>>testCases;
    while(testCases){
        
         cin>>noOfElem;
         
         for(int i = 0;i<noOfElem;i++) cin>>a[i]; 
        
         int i = 0; j = noOfElem - 1;

         sumLeft = a[i];sumRight = a[j]; 
         flag = 0;
         
         while(i+1<j){
            if( sumLeft >sumRight){
                --j;
                sumRight+=a[j];
            }
            else if(sumLeft<sumRight){
                ++i;
                sumLeft +=a[i];
            }
            else if( (sumLeft == sumRight)){
                        if(i+2 == j){
                            cout<<i+2<<endl;
                            flag = 1;
                            // cout<<"sl  "<<sumLeft<<" "<<sumRight;
                            break;
                        }
                        else{
                            --j;
                            sumRight+=a[j];
                            ++i;
                            sumLeft +=a[i];
                        }
            }   
        
         }
        if(noOfElem == 1) cout<<1<<endl;
        else if(!flag) cout<<"-1"<<endl;
         --testCases;
    }

    return 0;
}
