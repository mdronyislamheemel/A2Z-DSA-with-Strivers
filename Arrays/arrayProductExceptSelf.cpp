#include<iostream>
#include<vector>
using namespace std;
// brute force approach
vector<int> arrayProductBrute(vector<int> arr, int n){

    vector<int> prod(n, 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                prod[i] *= arr[j];
            }
        }
    }
    return prod;
}

// This will be a minimul approach
vector<int> arrayProductMinimul(vector<int> arr, int n){
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    //for prefix product
    for(int i = 1; i<n; i++){
        prefix[i] = prefix[i-1] * arr[i-1];
    }

    //for suffix product
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * arr[i+1];
    }

    //for result product
    for(int i = 0; i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}


int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    vector<int> result1 = arrayProductBrute(arr, n);
    
    cout << "Array product except self: ";
    for(auto val : result1){
        cout<< val <<" ";
    }
    cout << endl;

    vector<int> result2 = arrayProductMinimul(arr, n);
    cout << "Array product except self: ";
    for(auto val : result2){
        cout<< val <<" ";
    }
    cout << endl;
    return 0;
}