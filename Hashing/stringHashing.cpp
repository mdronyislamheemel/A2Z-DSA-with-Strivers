#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s; // take a input string
    cin >> s;

    //precompute
    int hash[26] = {0};
    for ( int i = 0; i< s.size(); i++){
        hash[s[i] - 'a'] += 1;
    }
    int q; // number of queries
    cin >> q;
    while(q --){
        char c;
        cin>> c;
        //fetch
        cout<< hash[c - 'a']<< endl;
    }
    return 0;
}