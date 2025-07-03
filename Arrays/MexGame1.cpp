#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        unordered_map<int, int> mp;
        for(int i =0; i< n; i++){
            int temp;
            cin>> temp;
            mp[temp]++;
        }
        for(int i = 0; ; i++){
            //cout<<i<<" "<<mp[i]<<endl;
            if(mp[i] < i+1){
                cout<< i<< endl;
                break;
            }
            
        }
    

    }
    return 0;
}