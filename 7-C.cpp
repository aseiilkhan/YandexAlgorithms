#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, d;
    cin >> n >> d;
    vector<vector<int>> a(2*n);
    priority_queue<int, vector<int>, greater<int>> q;

    for(int i = 0; i < n; i++){
        q.push(i+1);
        int x;
        cin >> x;
        a[2*i] = {x, -1, i};
        a[2*i+1] = {x+d, 1, i};
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);
    int maxi = 0;
    for(int i = 0; i < 2*n; i++){
        if(a[i][1] == -1){
            ans[a[i][2]] = q.top();
            if(ans[a[i][2]]> maxi) maxi = ans[a[i][2]];
            q.pop();
        }
        else{
            q.push(ans[a[i][2]]);
        }
    }
    cout << maxi<<"\n";
    for(int i = 0; i < n; i++){
        cout << ans[i]<<" ";
    }
}