#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    int ans;
    int b;
    for(int i = 0; i < n ; i++){
        if(i == 0){
            ans = abs(a[i]-x);
            b = a[i];
        }
        else{
            if(abs(a[i]-x) < ans){
                ans = abs(a[i]-x);
                b = a[i];
            }
        }
    }
    cout << b;
}