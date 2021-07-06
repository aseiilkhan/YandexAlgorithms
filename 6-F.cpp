#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll t = 0;
    n--;
    t+= min(x,y);
    ll l = 0,  r = (ll)n * max(x,y);
    while(l < r){
        ll m = (ll)(l+r)/2;
        ll a = (ll)m/x;
        ll b = (ll)m/y;
        if(a+b >= n){
            t = min(x,y) + m;
            r = m;
        }
        else l = m+1;
    }
    cout << t;
}