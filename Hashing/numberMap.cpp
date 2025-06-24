#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for( int i = 0; i< n; i++){
        cin>> arr[i];
    }

    //precompute
    map<int, int> mpp;
    for(int i = 0; i< n; i++){
        mpp[arr[i]]++;
    }
    //we can also the precompute in one for loop . just initialixe map after the vector and 
    //mpp[arr[i]]++; into the for loop. and for this we can oftimize the time complexity N+N from N*N

    //iterate in the map
    for(auto it: mpp){
        cout<< it.first <<"->" << it.second<< endl;
    }

    int q; //number of queries
    cin >> q;
    while (q--)
    {
        int number;
        cin>> number;
        //fetch
        cout<< mpp[number]<< endl;
    }
    
    return 0;
}