#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    unordered_map<int, int> mp;
    for(int i = 0; i< n; i++){
        cin>> arr[i];
        mp[arr[i]]++;
    }
    // sort(arr.begin(), arr.end());
    int ans = n;
    for(int i = 1; i < n; i++){
        if(mp[i] == 0){
            ans = i;
            break;
        }    
    }
    cout<< ans<< endl;
    

    return 0;

    
}
