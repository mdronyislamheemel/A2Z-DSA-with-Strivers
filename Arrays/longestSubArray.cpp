#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// This is bruteforce method
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for(int i = 0; i< n; i++){
//         cin >> arr[i];
//     }
//     int len = 0;
//     for(int i = 0; i < n; i++){
//         int sum = 0;
//         for(int j = i; j < n; j++){
//             sum = sum + arr[j];
//             if(sum == k){
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     cout << len << endl;
//     return 0;
// }



// // This is better approach
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     long long k;
//     cin >> k;
//     map<long long, int> preSumMap;

//     long long sum = 0;
//     int maxLen = 0;
//     for(int i = 0; i< arr.size(); i++){
//         sum += arr[i];
//         if(sum == k){
//             maxLen = max(maxLen, i+1);
//         }
//         long long rem = sum - k;
//         if(preSumMap.find(rem) != preSumMap.end()){
//             int len = i- preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }

//         if(preSumMap.find(sum) == preSumMap.end()){
//             preSumMap[sum] = i;
//         }
//     }
//     cout << maxLen;
// }

//this is the minimul approach and this is a two pointer approach
//But this will work only for zero and positive number but not for the negative number
int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long k;
    cin >> k;
    int left = 0;
    int right = 0;
    int maxLen = 0;
    long long sum = a[0];
    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left +1);
        }
        right ++;
        if(right < n){
            sum += a[right];
        }
    }
    cout << maxLen;
}