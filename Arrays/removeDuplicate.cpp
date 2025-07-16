//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Brute Force approach
void bruteforce(vector<int> arr, int n){
    //set doesn't store duplicate elements. so if we add those element 
    //in a set then the duplicate elements will be remove from
    set<int> st;
    for(int i =0; i<n; i++){
        st.insert(arr[i]);
    }
    //simply print the elements of the set
    int index = 0;
    for(auto it : st){
        // arr[index] = it;
        // index++;
        cout<< it << " ";
    }
    cout << endl;
}

//Minimul approach
void minimul(vector<int> arr, int n){
    int dupIndex = 0;
    for( int j = 1; j < n; j++){
        if(arr[j] != arr[dupIndex]){
            dupIndex++;
            arr[dupIndex] = arr[j];
        }  
    }
    for(int i = 0; i< dupIndex + 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << dupIndex+1;

}
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    //just take the input from the user
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    bruteforce(arr,n);
    minimul(arr, n);
    return 0;
}

