#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(2*n, vector<int>(2));
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        int x = min(a,b);
        int y = max(a,b);
        v[2*i] = {x,-1};
        v[2*i+1] = {y, 1};
    }
    vector<vector<int>> a(m, vector<int>(2));
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    vector<int> ans(m);
    sort(v.begin(), v.end());
    sort(a.begin(), a.end());
    int count = 0;
    int start = 0, end = 0;
    int cc = 0;
    while(start < m){
        while(end < 2*n && v[end][0] < a[start][0]){
            if(v[end][1] == -1) count++;
            else count--;
            end++;
        }
        while(end < 2*n && v[end][0] == a[start][0] && v[end][1] == -1){ count++; end++;}
        ans[a[start][1]] = count;
        start++;
    }
    for(int i = 0; i < m; i++){
        cout << ans[i]<<" ";
    }
}