// Reverse a array using recursion and using a single parameter

#include<iostream>
#include<vector>
using namespace std;

void revArr(int i, int a[], int n){
    if(i >= n/2){
        return;
    }
    else{
        swap(a[i], a[n-i-1]);
        revArr(i+1, a, n);
    }
}
int main()
{
    int n;
    cin>> n;
    vector<int> vec(n);
    for( int i = 0; i < n; i++){
        cin>> vec[i];
    }
    revArr(0, vec.data(), n);
    for(int i = 0; i < n; i++){
        cout<< vec[i] << " ";
    }
    return 0;
}