#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int>& vec, int n){
    //akhane parameter hisebe vector pathanor khetre send by reference dite hobe
    //tahole original vector change hobe nahole send by value korle original vector 
    //er value change hobe na tokhon ager vector e output dibe
    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j = i+1; j<= n-1; j++){//akhane j= i+1 kora hoyeche karon j = i korle
            //akoi valuer sather tulona korbe jetar asole dorkar nai
            if(vec[j]< vec[mini]){
                mini = j;
            }
        }
        int temp = vec[mini];
        vec[mini] = vec[i];
        vec[i] = temp;
    }
}
int main()
{
    int n;//vector size
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    selection_sort(arr, n);//function call
    for(int i = 0; i< n; i++){
        cout<< arr[i]<< " ";
    
    }

    return 0;
}