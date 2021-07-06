#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int r;
    cin >> r;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int start = 0, end = 0;
    long long count = 0;
    while(end < n){
        if(a[end] - a[start] <= r) end++;
        else{
            count+= n-end;
            start++;
        }
    }
    cout << count;
}