#include<iostream>
#include<vector>
#include<algorithm>
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

    // //Brute force approach

    // //just take a array to store the intersection elements
    // vector<int> intersec;
    // vector<int> vis(n2, 0);
    // for(int i = 0; i < n1; i++){
    //     for(int j = 0; j < n2; j++){
    //         if(a[i] == b[j] && vis[j] == 0){
    //             intersec.push_back(a[i]);
    //             vis[j] = 1;
    //             break;
    //         }
    //         if(b[j] > a[i]) break;
    //     }
    // }
    // for(auto val : intersec){
    //     cout<< val << " ";
    // }
    // return 0;


    // minimul approach try
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
	int i = 0;
	int j = 0;
    
	vector<int> ans;
	while(i < n1 && j < n2){
		if(a[i] < b[j]){
			i++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else{
			ans.push_back(a[i]);
			i++;
			j++;
		}
	}
    for(auto val : ans){
        cout<< val << " ";
    }
	return 0;

}