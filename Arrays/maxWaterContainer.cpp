#include<iostream>
#include<vector>
using namespace std;

// This is Brute Force Approach
long maxWater(vector<int>& height, int n){
    long maxWater = 0;
    long area = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int width = j - 1;
            int ht = min(height[i], height[j]);
            area = width * ht;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}


int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i = 0; i< n; i++){
        cin >> height[i];
    }   
    cout << "Max Water: " << maxWater(height, n);

    return 0;
}