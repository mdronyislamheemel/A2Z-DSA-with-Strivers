#include<iostream>
#include<vector>
using namespace std;

// this is Brute force approach
int bruteForce(vector<int>& arr, int n){
    // st = start
    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum );
        }
    }
    return maxSum;
}

//this is Kadanes algorithm
int kadanes(vector<int> arr, int n){
    int currSum = 0, maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    
    cout << "According to bruteforce Max Subarray sum: "<< bruteForce(arr, n) << endl;
    cout << "According to Kadane's algorithm Max Subarray sum: "<< kadanes(arr, n) << endl;

    return 0;
}