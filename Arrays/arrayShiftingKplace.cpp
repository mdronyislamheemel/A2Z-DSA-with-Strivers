//https://leetcode.com/problems/rotate-array/description/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }

    //creating a temporary array
    vector<int> temp;
    int k; // the number of element which is shifted
    cin>> k;

    // store the shifting element in a temporary array
    for(int i = 0; i < k; i++){
        temp.push_back(arr[i]);
    }

    //shifting the elements
    for(int i = k; i< n; i++){
        arr[i - k] = arr[i];
    }

    //put the temporary value into the main array
    for(int i = n - k; i < n; i++){
        arr[i] = temp[i-(n-k)];
    }

    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }
    
    return 0;
} 