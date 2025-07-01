#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i = 0; i< n+1; i++){
        int flag = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            ans = i;
            break;
        }
    }
    cout<< ans << endl;
    return 0;
}