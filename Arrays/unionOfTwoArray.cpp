#include<iostream>
#include<vector>
#include<set>
using namespace std;
//Brute force approach
void bruteForce(vector<int> a, vector<int> b, int n1, int n2){
    set<int> st;
    for(int i = 0; i <n1; i++){
        st.insert(a[i]);
    }
    for(int i = 0; i <n2; i++){
        st.insert(b[i]);
    }

    vector<int> unon;
    for(auto it : st){
        unon.push_back(it);
    }
    for( int val : unon){
        cout << val<<" ";
    }
    cout << endl;
}

//minumul approach
void minimulApproach(vector<int> a, vector<int> b, int  n1, int n2){
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
}


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

    bruteForce(a, b, n1, n2);
    minimulApproach(a, b, n1, n2);   
    return 0;
}