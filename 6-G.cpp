#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, m;
    ll t;
    cin >> n >> m >> t;
    ll l = 0, r = (max((ll)(n/2), (ll)(m/2)));
    while(l < r){
        ll mid = (ll)((l+r+1)/2);
        ll nt = (ll)(n*mid*2) + (ll)(mid*m*2) - (ll)(mid*mid*4);
        if(t >= nt){
            l = mid;
        }
        else r = mid-1;
    }
    cout << r;
}