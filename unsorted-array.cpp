#include <iostream>
#include <vector>
using namespace std;
#define ff(x,N) for(int i = x ; i < N ; i++) 

int main(){
        
    int testCases , noOfElem , curr_max , k , elem , rightMax[] ;
    vector <int> in ;
    bool isSatisfied ;
   
    cin>>testCases;

    while( testCases ){
        
          
          cin>> noOfElem ;

          ff(0,noOfElem){
           
           cin>>elem;

           in.push_back(elem);
          
          };
          
        
         
        
        
        
        // curr_max = in[0] ;
         
        //   if(noOfElem == 3){
        //         if(in[0]<=in[1] && in[1]<=in[2]){
        //             cout<<in[1]<<endl;
        //         }
        //         else{
        //             cout<<"-1"<<endl;
        //         }
        //     }
        //    else{

        //         ff(1,noOfElem-1){
                   
        //             isSatisfied = true;
                    
        //             if(in[i] >= curr_max) { 
                    
        //                 curr_max = in[i] ;
        //                // cout<<"cuurent max is "<<curr_max<<endl;
        //                 for(int k = i+1 ; k < noOfElem ; k++) {
                           
        //                     if( in[k] < in[i] ){
        //                         // cout<<"k is" <<k<<endl;
        //                          isSatisfied = false;
        //                         //cout<<"-1"<<endl;
        //                         break;
        //                     }
        //                 }
        //                 if(isSatisfied==true){ cout<<curr_max<<endl ; break; }    
        //             }
        //             else{
        //                  isSatisfied = false;
        //             }
        //         }
              
        //         if(isSatisfied==false){
        //             cout<<-1<<endl; 
        //         }                    
            
        //     }
        
            in.clear();
            --testCases ;
        
    }
    
    return 0 ;
}