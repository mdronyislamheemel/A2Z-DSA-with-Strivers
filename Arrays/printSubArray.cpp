#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    // st = start
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
// time complexity of this code is approximately O(n^3)