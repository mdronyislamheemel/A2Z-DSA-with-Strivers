#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    //just take the input from the user
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
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
    return 0;
}


/*//minimal way
int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    int i = 0;
    for( int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i+1;

}*/