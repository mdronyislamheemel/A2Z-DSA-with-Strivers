// Problem link: https://takeuforward.org/plus/dsa/problems/check-if-the-number-if-armstrong


#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool armStrong(int n){
    int lastDigit;
    int temp = n;
    int cubeSum = 0;
    while(n>0){
        lastDigit = n % 10;
        n = n/10;
        cubeSum += pow(lastDigit,3);
    }
    return cubeSum == temp;
}

int main()
{
    int n = 153;
    cout<<armStrong(n);
    return 0;
}