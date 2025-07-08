#include<iostream>
#include<vector>
using namespace std;

// this is Brute force approach
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    // st = start
    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum );
        }
    }
    cout << maxSum;
    return 0;
}