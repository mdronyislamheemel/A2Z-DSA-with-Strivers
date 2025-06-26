#include<iostream>
#include<vector>
using namespace std;

int partition( vector<int>& vec, int low, int high){
    int pivot = vec[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while(vec[i] <= pivot && i <= high - 1 ){
            i++;
        }
        while(vec[j] >= pivot && j >= low + 1 ){
            j--;
        }
        if(i<j){
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[low], vec[j]);
    return j;
}

void quick_sort(vector<int>& vec, int low, int high){
    if(low < high){
        //pIndex = partition index
        int pIndex = partition(vec, low, high);
        quick_sort(vec, low, pIndex - 1);
        quick_sort(vec, pIndex + 1, high);

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
    quick_sort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}