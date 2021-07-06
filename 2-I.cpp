#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n>> m >> k;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for(int i = 0; i < k; i++){
        int x, b;
        cin >> x  >> b;
        a[x-1][b-1] = -1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == -1) continue;
            if(i-1>= 0){
                if(j-1>= 0){
                    if(a[i-1][j-1] == -1) a[i][j]++;
                }
                if(a[i-1][j] == -1) a[i][j]++;
                if(j+1 < m){
                    if(a[i-1][j+1] == -1) a[i][j]++;
                }
            }
            if(j-1>=0){
                if(a[i][j-1] == -1) a[i][j]++;
                if(i+1 < n && a[i+1][j-1] == -1) a[i][j]++;
            }
            if(i+1 < n){
                if(a[i+1][j] == -1) a[i][j]++;
                if(j+1<m && a[i+1][j+1] == -1) a[i][j]++;
            }
            if(j+1 < m){
                if(a[i][j+1] == -1) a[i][j]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == -1) cout << "* ";
            else cout << a[i][j]<<" ";
        }
        cout <<"\n";
    }
    
}