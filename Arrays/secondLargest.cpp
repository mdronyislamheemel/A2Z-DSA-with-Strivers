#include<iostream>
#include<vector>
using namespace std;
//aita just largest number ber korar method
int largestf(vector<int>& vec, int n){
    int largest = vec[0];
    for(int i = 0; i< n; i++){
        if(vec[i] > largest){
            largest = vec[i];
        }
    }
    return largest;
}

//akhane second largest number dhore naua hoyeche -1. so when we compare it with a 
//array number and if it greater than -1 and it is not equal to the largest then it will be
// the second largest abong avabe array er last porjonto check korte thakte hobe 
void sLargest(vector<int>& arr, int n){
    int largest = largestf(arr, n);
    int sLargest = -1;
    for(int i = 0; i< n; i++){
        if(arr[i] > sLargest && arr[i] != largest){
            sLargest = arr[i];
        }
    } 
    cout<< "The second largest number is: "<<sLargest<< endl;
}

// this is a bruteforce method and its time complexity is = O(2n)
// but we can think a minimul approach. lets think:

void secondLargest(vector<int>& vec, int n){
    int largest = vec[0];
    int seLargest = INT_MIN;
    for(int i = 1; i< n; i++){
        if(vec[i] > largest){
            seLargest = largest;
            largest  = vec[i];
        }
        else if(vec[i] < largest && vec[i] > seLargest){
            seLargest = vec[i];
        }
    }
    cout<< seLargest << endl;
}

//now we can also calculate second smallest number too

void secondSmallest(vector<int>& vec, int n){
    int smallest = vec[0];
    int secondSmallest = INT_MAX;
    for(int i = 1; i< n; i++){
        if(vec[i] < smallest){
            secondSmallest = smallest;
            smallest  = vec[i];
        }
        else if(vec[i] != smallest && vec[i] < secondSmallest){
            secondSmallest = vec[i];
        }
    }
    cout<< secondSmallest << endl;
}



int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for( int i = 0; i<n; i++){
        cin>> arr[i];
    }
    sLargest(arr, n);
    secondLargest(arr, n);
    secondSmallest(arr, n);
    return 0;
}

