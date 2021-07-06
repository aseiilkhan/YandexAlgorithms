#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        for(int j = 0; j < x; j++){
            string s;
            cin >> s;
            m[s]++;
        }
    }
    vector<string> ans1;
    vector<string> ans2;
    for(auto it:m){
        if(it.second == n){
            ans1.push_back(it.first);
        }
        ans2.push_back(it.first);
    }
    cout << ans1.size()<<"\n";
    for(int i = 0; i < ans1.size(); i++){
        cout << ans1[i]<<"\n";
    }
    cout << ans2.size()<<"\n";
    for(int i = 0; i < ans2.size(); i++){
        cout << ans2[i]<<"\n";
    }
}