#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r, c;
    cin >> n >> r >> c;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0;
    int ri = 1000000000;
    int m = 0;
    sort(a.begin(), a.end());
    while(l < ri){
        m = (l+ri)/2;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(i+c-1 < n && a[i+c-1] - a[i] <= m){
                count++;
                i = i+c-1;
            }
        }
        if(count >= r){
            ri = m;
        }
        else l = m+1;
    }
    cout << l;

}
