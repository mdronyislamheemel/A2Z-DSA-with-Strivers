// Is this a Palindrom string or not?

#include<iostream>
#include<vector>
using namespace std;
bool palString( int i, string s, int n){
    if( i >= n){
        cout<< "This is Palindrom string: ";
        return true;
    }
    if(s[i] != s[n-i-1]){
        cout<< "This is not: ";
        return false;
    }
    else return palString( i+1, s, n);
}

int main()
{
    string str;
    cin>> str;
    int size = str.size();
    cout << palString(0, str, size);
    return 0;
}