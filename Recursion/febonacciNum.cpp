#include<iostream>
#include<vector>
using namespace std;

int febonacciNum(int n){
    int feb = 0;
    if(n <= 1){
        return n;
    }
    int last = febonacciNum(n-1);
    int secondLast = febonacciNum(n-2);
    
    return feb = last + secondLast;
}
int main()
{
    int n;
    cin >> n;
    cout<< "The febonacci of " << n << " = " << febonacciNum(n);
    return 0;
}