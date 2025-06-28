#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }

    set<int> st;
    for(int i =0; i<n; i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it : st){
        // arr[index] = it;
        // index++;
        cout<< it << " ";
    }
    return 0;
}