#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int deciNum; 
    cin>> deciNum;
    int remain, ans = 0, i =0;
    string binNum = " ";
    while(deciNum != 0){
        remain = deciNum % 2;
        binNum.push_back('0'+ remain);
        deciNum /= 2;
    }
    reverse(binNum.begin(), binNum.end());
    cout << "The binary number is: "<< binNum<< endl;
    return 0;
}