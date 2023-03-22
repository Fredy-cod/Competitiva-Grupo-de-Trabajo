#include <bits/stdc++.h>
using namespace std;    
const int N=20;

int main() {
    int a[N];
    for(int i=0; i<N; ++i) a[i] = i+1;
    for(int i=0; i<(1<<(N+1)); ++i) {
        for(int bit=0; bit<N; ++bit) {
            if((i>>bit)&1) {
                printf("%d ", a[bit]);
            }
        }
        puts("");
    }
    return 0;
}