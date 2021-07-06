#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<vector<int>> b(m, vector<int>(2));
    for(int i = 0; i < m; i++){
        cin >> b[i][0] >> b[i][1];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int x = n-1;
    int y = m-1;
    long long s = 0;
    int mini = INT_MAX;
    while(x >= 0){
        while(y >= 0 && b[y][0] >= a[x]){
            if(b[y][1] < mini){
                mini = b[y][1];
            }
            y--;
        }
        s+= mini;
        x--;
    }
    cout << s;

}