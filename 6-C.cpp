#include <bits/stdc++.h>
using namespace std;
int main(){
    long long w, h, n;
    cin >> w >> h >> n;
    long long l, r;
    
    long long a = max(w, h);
    long long b = min(w, h);
    l = 0;
    r = a*n;
    long long ans = a*(n);
    while(l<r){
        long long m = (l+r)/2;
        long long ca = m/a;
        long long cb = m/b;
        if(n <= ca*cb){ 
            r = m;
        }
        else l = m+1;
    }
    cout << l;
}