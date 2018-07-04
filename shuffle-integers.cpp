// #include <bits/stdc++.h>
// using namespace std;


// void swap(int &a,int &b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }
// void shuffleIntegers(int *a,int start,int end){

//     if((end-start)<2){
//         cout<<"end and start"<<end<<" "<<start<<endl;
//         cout<<"return here"<<endl;
//         return;
//     }
//     int mid = (end+start)/2;
//     int j = 1;
//     int temp = mid+1;

//     for(int i = (start + mid)/2+1;i<=(start+mid);i++){
//             cout<<"swap "<<i<<" "<<temp<<endl;
//             swap(a[i],a[temp++]);
//     }
//      cout<<"mid is "<<mid<<endl;
//      //shuffleIntegers(a,start,mid);
//      shuffleIntegers(a,mid+1,end);
//      return;

// }

// int main(){
    
//     vector<int> a;
//     int j = a.size()/2;
    
//     int input[100]= {1,2,3,4,5,6,7,8,9,10}; // 1st itera 1 2 3 6 7 4 5 7 8 9 10
//                                             // 2nd itera 1 2 6 3 7 4 5 7 8 9 10
//                                             // 3rd itera 1 6 2 
//     shuffleIntegers(input,0,9);

//     for(int i=0;i<=9;i++){
//         cout<<input[i]<<" ";
//     }
    
    
//     return 0;
// }

// /** Find the size of array
//  *  exchange 2nd half of 1st with 1st half os second
//  *  pass size as half with start index a 0 and end index as size/2 1st recursive call
//  *  pass start as half +1 , end as end in 2 recursive call
//  *  pass base case as end - start < 3
//  * */
// C++ Effective  program to shuffle an array of size 2n
 
#include <bits/stdc++.h>
using namespace std;
 
// function to shuffle an array of size 2n
void shufleArray(int a[], int f, int l)
{
    // If only 2 element, return
    if (l - f == 1)
        return;
 
    // finding mid to divide the array
    int mid = (f + l) / 2;
 
    // using temp for swapping first half of second array
    int temp = mid + 1;
 
    // mmid is use for swapping second half for first array
    int mmid = (f + mid) / 2;
 
    // Swapping the element
    for (int i = mmid + 1; i <= mid; i++)
        swap(a[i], a[temp++]);
 
    // Recursively doing for first half and second half
    shufleArray(a, f, mid);
    shufleArray(a, mid + 1, l);
}
 
// Driven Program
int main()
{
    int a[] = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(a) / sizeof(a[0]);
 
    shufleArray(a, 0, n - 1);
 
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
 
    return 0;   
}