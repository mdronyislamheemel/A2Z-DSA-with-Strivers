#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s; // take a input string
    cin >> s;

    //precompute
    int hash[26] = {0};
    //if we take 256 instead of 26 then no need to minus 'a' because it takes all of the ascii characters
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