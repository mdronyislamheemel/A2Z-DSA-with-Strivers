//problem link: https://takeuforward.org/plus/dsa/problems/check-for-prime-number

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int num = 5;
    int count = 0;
    vector<int> divisorList;
    for (int i = 1; i <= sqrt(num); i++){
        if (num % i == 0){
            count++;
            if (num/i != i){
                count++;
            }
        }
    }
    if(count == 2){
        cout << "prime number";
    }else cout << "Not a prime number";
    return 0;
}