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

    int j = -1;
    for(int i = 0; i< n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    // If no zero found, nothing to move
    if (j == -1) return;
    
    // if nums[i] != 0 , then swap the position and increase the j by 
    //one to point the next index. and if the next index value is 0 then 
    //nothing to do, just traverse the array with i;
    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        int n = arr.size();

    // just initialize the first zeros position and assign to the j
        }
    }
    return 0;
}