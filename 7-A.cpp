#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(2*m);
    for(int i = 0; i < m; i++){
        int a , b;
        cin >> a >> b;
        v[2*i] = {a,-1};
        v[2*i+1] = {b, 1};  
    }
    sort(v.begin(), v.end());
    int count = 0;
    int ans = 0;
    for(int i = 0; i < 2*m; i++){
        if(i == 0) ans+= v[i].first;
        else{
            if(count == 0){
                ans+= v[i].first - v[i-1].first-1;
            }
        }
        if(v[i].second == -1) count+= 1;
        if(v[i].second == 1) count -=1;
        
    }
    ans+= n-v[2*m-1].first-1;
    cout << ans;
}