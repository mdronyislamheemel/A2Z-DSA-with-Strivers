//Reverse a array using recursion

#include<iostream>
#include<vector>
using namespace std;

void revArr(int l, int a[], int r){
    if( l >= r){
        return;
    }
    else{
        swap(a[l], a[r]);
        revArr(l+1, a, r-1);
    }

}
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    revArr(0 , arr.data(), n-1);
    for (int i = 0; i < n ; i++)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
}
