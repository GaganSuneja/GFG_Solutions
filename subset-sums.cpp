#include <bits/stdc++.h>
using namespace std;

void subSetSum(int array[],int start,int end,set <int> &s,int sum){

        if(start>end){
            s.insert(sum);
            return;
        }
        
        subSetSum(array,start+1,end,s,sum+array[start]);
        
        subSetSum(array,start+1,end,s,sum);

        
}

int main(){
    
    int array[10] = {5, 4, 3};
    //for(int i = 0;)
    set <int> s;
    set <int> :: iterator it;
    subSetSum(array,0,2,s,0);

    for(it = s.begin();it!=s.end();++it){
        cout<<*it<<" ";
    }

    return 0;
}


//Thought

/* Doing with recursion smallest case when there is only 1 element then no subsets hence out is elem
   sort it in decreasing order first
   reach the last element and print it
   ex 4 3 2 1
   add index while not equal to size 
   base case is when size of the elememt left is 

   order should be print the first elem
   print subsequent sum of the sets 

   won't work as you dont know what are the elems ex 4 would come after 3's elements have finshed

   Next move
   sort in dec
   print all elements from end first
   now start from 2nd last 
   print the elem + array[end]
   keep decreasing the end
    
   this also fails in simple test case
   as 4+1 = 5 comes after 3+2+1 = 6

   1 2 3 4
   0 1 2 3 4  1,2 1,3 1,4  2,3 2,4   3,4    1,2,3,4  
               3   4   5    5  6     7       10    
    
   0 1 2 3 3 4 5 5 6 7 10

   =============
   select one at a time from the array and print subset / subsequences like a string 
*/