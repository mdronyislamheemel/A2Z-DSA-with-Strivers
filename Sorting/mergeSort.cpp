#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& vec, int low, int mid, int high){
    vector<int> temp;
    //low.. mid
    //mid + 1 ... high
    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high)
    {
        if(vec[left] <= vec[right]){
            temp.push_back(vec[left]);
            left++;
        }
        else {
            temp.push_back(vec[right]);
            right ++;
        }
    }
    while(left <= mid){
        temp.push_back(vec[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(vec[right]);
        right ++;
    }
    for(int i = low; i<= high; i++){
        vec[i]= temp[i-low];
    }
    
    
}
void merge_sort(vector<int>& vec, int low, int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    merge_sort(vec, low, mid);
    merge_sort(vec, mid+1, high);
    merge(vec, low, mid, high);
}
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    merge_sort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}