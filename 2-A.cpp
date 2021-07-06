#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int b;
    while(cin >> b){
        a.push_back(b);
    }
    for(int i = 1; i < a.size(); i++){
        if(a[i]<=a[i-1]){
            cout << "NO";
            return 0;
        }
    }
    cout <<"YES";
}