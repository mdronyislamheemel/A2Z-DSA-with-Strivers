#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num1 = 7, num2 = 20;
    for (int i = min(num1, num2); i >= 1; i--){
        if( num1 % i == 0 && num2 % i == 0){
            cout<< i;
            break;
        }
    }
    return 0;
}