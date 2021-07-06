#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ;i++){
        cin >> a[i];
    }
    vector<int> ans1;
    bool b1 = false;
    for(int i = (n)/2; i < n; i++){
        for(int j = 1; j <= i; j++){
            if(i+j >= n){
                ans1.push_back(a[i-j]);
                b1 = true;
            }
            else{
                if(a[i-j] == a[i+j] && i-j == 0 && i+j == n-1){
                    b1 = true;
                    break;
                }
                if(a[i-j] != a[i+j]) break;
            }
        }
        if(b1) break;
    }
    vector<int> ans2;
    bool b2 = false;
    for(int i = (n+1)/2-1, j = (n+1)/2; j< n; i++, j++){
        for(int k = 0; k <= i; k++){
            if(j+k >= n){
                ans2.push_back(a[i-k]);
                b2 = true;
            }
            else{
                if(a[i-k] == a[j+k] && i-k == 0 && j+k == n-1){
                    b2 = true;
                    break;
                }
                if(a[i-k]!= a[j+k]) break;
            }
        }
        if(b2) break;
    }
    if(b1 && !b2 || b1 && b2 && (ans1.size() < ans2.size())){
        cout << ans1.size()<<"\n";
        for(int i = 0; i < ans1.size(); i++){
            cout << ans1[i] <<" ";
        }
    }
    else if(b2 && !b1 || b1 && b2 && (ans2.size() < ans1.size())){
        cout << ans2.size()<<"\n";
        for(int i = 0; i < ans2.size(); i++){
            cout << ans2[i]<<" ";
        }
    }
    else cout << 0;
}