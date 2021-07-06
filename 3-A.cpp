#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    int a;
    while(cin >> a){
        m[a]++;
    }
    cout << m.size();
}