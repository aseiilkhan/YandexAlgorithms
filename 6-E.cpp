#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b,c;
    cin >> a >> b >> c;
    long long l = 0;
    long long r = 1000000000000000000;
    while(l< r){
        long long m = (long long)((l+r)/2);
        if((long long)(2*a+3*b+4*c+5*m)* (long long)2 >= (long long)7*(long long)(m+a+b+c)){
            r = m;
        }
        else l = m+1;
    }
    cout << l;
}