#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>& vec, int n){
    for( int i = n-1; i>=1; i--){
        for(int j = 0; j<i; j++){
            if(vec[j] > vec[j+1]){
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
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
    bubble_sort(arr, n);
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}
//time complexity of this method O(n2)