#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < m; i++){
        int val = b[i];
        int l = 0;
        int r = n-1;
        int m = 0;
        while(l < r){
            m = (l+r)/2;
            if(a[m] >= val) r= m;
            else l = m+1;
        }
        if(a[l] == val) cout << "YES ";
        else cout <<"NO ";
    }
}
