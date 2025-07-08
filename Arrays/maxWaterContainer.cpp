#include<iostream>
#include<vector>
using namespace std;

// This is Brute Force Approach
long maxWater(vector<int>& height, int n){
    long maxWater = 0;
    long area = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int width = j - i;
            int ht = min(height[i], height[j]);
            area = width * ht;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
    
}

//this would be optimize solution using two pointer
long maxWaterTwoPointer( vector<int>& height, int n){
    int left = 0, right = n-1;
    long maxWater = 0;
    while(left < right){
        int width = right - left;
        int ht = min(height[left], height[right]);
        long area = width * ht;
        maxWater = max(maxWater, area);
        if(height[left] < height[right]){
            left ++;
        }
        else if(height[left] > height[right]){
            right --;
        }
        else {
            left ++;
            right--;
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
    cout << "Max Water: " << maxWater(height, n) << endl;
    cout << "Max Water using two pointer: " << maxWaterTwoPointer(height, n);

    return 0;
}