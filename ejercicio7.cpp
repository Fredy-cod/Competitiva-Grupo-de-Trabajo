#include <bits/stdc++.h>
using namespace std;    

int main() {
    string s;
    for(char c='A'; c<='J'; ++c) s.push_back(c);
    do {
        puts(s.c_str());
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}