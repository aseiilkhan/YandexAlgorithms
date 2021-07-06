#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    string g, s;
    cin >> g>> s;
    map<char, int> a;
    for(int i = 0; i < m; i++){
        a[g[i]]++;
    }
    int start = 0;
    int end = 0;
    map<char, int> b;
    for(int i = 0; i < m; i++){
        b[s[i]]++;
    }
    int cur = 0, count = 0;
    for(auto it: b){
        if(a.find(it.first) != a.end()){
            if(a[it.first] == it.second) cur++;
        }
    }
    for(int i = m; i < n; i++){
        if(cur == a.size()) count++;
        if(a.find(s[i]) != a.end()){
            if(a[s[i]] == b[s[i]]) cur--;
            else if(a[s[i]] == b[s[i]] + 1) cur++; 
        } 
        b[s[i]]++;
        if(a.find(s[i-m])!= a.end()){
            if(a[s[i-m]] == b[s[i-m]]) cur--;
            else if(a[s[i-m]] == b[s[i-m]]-1) cur++; 
        }
        b[s[i-m]]--;
    }
    if(cur == a.size()) count++;
    cout << count;

}