#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    // brute force method
    int maxi = 0;
    for( auto val : arr){
        maxi = max(maxi , val);
    }
    vector<int> vec(maxi+1, 0);
    for(int i = 0; i < n; i++){
        vec[arr[i]]++;
    }
    for( int i = 0; i < n; i++){
        if(vec[arr[i]] == 1){
            cout << i << endl;
        }
    }

    // this is better approach
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] ++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            cout << it.first << endl;
        }
    }

    // and the best approach
    int xorr = 0;
    for(auto val : arr){
        xorr = xorr ^ val;
    }
    cout << xorr;
    return 0;
}