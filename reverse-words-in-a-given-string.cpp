#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100000];
    int testCases;
    cin>>testCases;
    stack<string> st;
    cin>>ws;
    while(testCases){
        cin.getline(a,10000);
        char * ptr = strtok(a,".");
        while(ptr!=NULL){
        
            string q(ptr); 
            st.push(q);
            q = ".";
            st.push(q);
            ptr =strtok(NULL,"."); 
        }
    
        //cout<<"top is "<<st.top()<<endl;
        bool flag = false;
       
        if((st.size()%2)==0) 
           st.pop();
        

        while(!st.empty()) {
            cout<<st.top();st.pop();
        }
        //if(flag) cout<<".";
        cout<<endl;
    --testCases;
    }

    return 0;
}
