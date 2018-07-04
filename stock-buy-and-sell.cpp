#include <iostream>
#include <set>

using namespace std ;

int main(){
    
    int testCases , noOfElem , a ;
    vector <int> in[100]  ;
    vector <int> graph[100] ;

    cin>>testCases ;

    while( testCases ){

        cin>>noOfElem ;

        for( int i = 0 ; i < noOfElem ; i++ ) { cin >> a ; in.push(a) ; }

        for( int i = 0 ; i < noOfElem - 1 ; i++ ) { if (in[i+1] >= in[i] ) graph.insert(1) else graph.insert(0) ; }
        
        if( in[i+1] > in[i] ) 


        in.clear() ;
        
        --testCases ;    
     }
    
    set< pair<int,int> > s;
    
    s.insert(make_pair(1,1));

    return 0 ;
}