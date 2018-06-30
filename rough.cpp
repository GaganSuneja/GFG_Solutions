#include <iostream>
#include <algorithm>
#include <map>
#include <cstdio>
#include <stack>
#include <cstdlib>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <cstring>
#include <utility>
#include <iterator>

using namespace std;

#define loop(x,k,n) for(int x = k; x < n; x++)      // i ko 0 se n
#define revLoop(q,w) for (int q = w-1;q>=0 ;q--)
#define ll long long int
#define minMod 10e7+3
#define strInp(a) cin.getline(a,1000);
#define mp(a,b) make_pair(a,b)
#define init(a,n) memset(a,n,sizeof(a));
#define pb(i) push_back(i);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc int t; cin >> t; while(t--)
#define arrInp(a,n) for (int i=0;i<n;i++) cin >> a[i]

int index(int freq[], int n)
{
	int max = INT_MIN;
	int index = -1;
	loop(i,0,n)
	{
		if(freq[i] > max)
		{
			max = freq[i];
			index = i;
            cout<<"maximum val is  "<<max<<"index is "<<i<<endl;
        }

	}
   
   cout<<"index is "<<index<<endl;
	return index;
}

int main()
{
	tc
	{
		int n;
		cin >> n;
		int a[n];
		int freq[61] = {0};
		loop(i,0,n)
		{
			cin >> a[i];
			freq[a[i]]++;
		}

        loop(i,0,7) cout<<freq[i]<<endl;
		
        for (int i = 0;i<61;i++)
		{
			int j = index(freq,61);
           
            // cout<<i<<"th call"<<endl;
			
            // if(freq[j] > 0)
			// {
			// 	for (int k=0;k<freq[j];k++)
			// 		cout << j << " ";
			// }
            // cout<<endl;
			freq[j] = 0;
		}

		cout <<  endl;

	}
}
// Steps of working
// 1. Traverse over the array O(n)
// 2. Increase the value of keys acc.. to frequency O(1)
// 3. insert all in a vector 0(n)
// 4. sort vector acc to decreaing O(nlogn)
// 5. run over sorted array if one is equal to other sort them in increasing O(nlogn)

//2nd method
//1. use set's to insert and sort
//2. traverse over set and find where freq. are equal  || use a vector to store and then sort
//3. Use vector to find similar frequencies and find their iterator and then sort.
//4. Print the resultant

// Best Method
// 1. use map for insertion
// 2. copy all keys value to map pair
// 3. use sort for sorting common values using iterators
// 4. print the vector