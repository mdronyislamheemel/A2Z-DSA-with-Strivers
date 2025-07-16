//https://leetcode.com/problems/missing-number/description/
//leetcode problem:268. Missing number

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//this is bruteforce approach
void bruteForce(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i = 1; i< n+1; i++){
        int flag = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            ans = i;
            break;
        }
    }
    cout<< ans << endl;
}

//this is the better approach
void betterApproach(vector<int> arr, int n){
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
    
}

//this is the minimul approach
void minimulApproach(vector<int> arr, int n){
    int sum = (n + 1) * (n + 2) / 2; //1 to n number natural number er jogfol ber korar sutro
    int cal = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cal = cal + arr[i];
    }
    cout << sum - cal << endl;
}


int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    bruteForce(arr, n);
    betterApproach(arr, n);
    minimulApproach(arr, n);
    return 0;
}