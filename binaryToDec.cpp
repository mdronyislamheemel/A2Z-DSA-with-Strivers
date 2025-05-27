#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; 
    cin>> n;
    int remain, ans = 0, i =0;
    while(n != 0){
        remain = n % 2;
        n = n /10;
        ans = ans + remain * (1<<i);//left shift 
        i++;
    }
    cout << ans;
    return 0;
}