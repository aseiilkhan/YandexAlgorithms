#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    ll l = 0;
    ll r = 1000000000000000000;
    while(l < r){
        ll m = (ll)((l+r+1)/2);
        ll count = 0;
        for(ll i = 0; i < n; i++){
            count+= (ll)(v[i]/ m);
        }
        if(count>= k){
            l = m;
        }
        else r = m-1;
    }
    cout << r;

}