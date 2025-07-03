//https://leetcode.com/problems/missing-number/description/
//leetcode problem:268. Missing number

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int sum = (n + 1) * (n + 2) / 2;
    int cal = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cal = cal + arr[i];
    }
    cout << sum - cal << endl;

    return 0;
}