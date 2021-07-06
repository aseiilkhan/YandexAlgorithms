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
        int ans = INT_MAX;
        int l = 0;
        int r = n-1;
        int mid;
        while(l < r){
            mid = (l+r)/2;
            if(a[mid] >= val) r = mid;
            else l = mid+1;
        }
        if(l-1 >= 0 && abs(a[l-1] - val) < abs(a[l]-val)) cout << a[l-1]<<" ";
        else cout << a[l]<<" ";
    }
}
