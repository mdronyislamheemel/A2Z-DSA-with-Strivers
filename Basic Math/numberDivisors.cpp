//problem link: https://takeuforward.org/plus/dsa/problems/divisors-of-a-number

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int num = 36;
    vector<int> divisorList;
    for (int i = 1; i <= sqrt(num); i++){
        if (num % i == 0){
            divisorList.push_back(i);
            if (num/i != i){
                divisorList.push_back(num/i);
            }
        }
    }
    sort(divisorList.begin(), divisorList.end());
    for (int num : divisorList){
        cout << num << " ";
    }
    
    return 0;
}