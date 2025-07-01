#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n1;
    cin>> n1;
    vector<int> a(n1);
    for(int i = 0; i< n1; i++){
        cin>> a[i];
    }

    int n2;
    cin>> n2;
    vector<int> b(n2);
    for(int i = 0; i< n2; i++){
        cin>> b[i];
    }
    
    // //brute force method
    // set<int> st;
    // for(int i = 0; i <n1; i++){
    //     st.insert(a[i]);
    // }
    // for(int i = 0; i <n2; i++){
    //     st.insert(b[i]);
    // }

    // vector<int> unon;
    // for(auto it : st){
    //     unon.push_back(it);
    // }
    // for( int val : unon){
    //     cout << val<<" ";
    // }


    //minimul approach ba 2 pointer approach
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(i< n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;       
    }
    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }

    for(int val : unionArr){
        cout<< val << " ";
    }

    return 0;
}