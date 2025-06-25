#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>& vec, int n){
    for( int i = 0; i<=n; i++){
        int j = i;
        while(j> 0 && vec[j-1] > vec[j]){
            int temp = vec[j];
            vec[j] = vec[j-1];
            vec[j-1] = temp;

            j--;
        }
    }
}
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    insertion_sort(arr, n);
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}
//time complexity of this method O(n2)