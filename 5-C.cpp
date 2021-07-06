#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    int s = 0;
    int lastx = 0;
    int lasty = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >>b;
        if(i == 0){
            x[i] = s;
            lastx = b;
            y[i] = s;
            lasty = b;
        }
        else{
            if(b - lastx > 0){
                x[i] = x[i-1]+b-lastx;
            }
            else x[i] = x[i-1];
            lastx = b;
            if(lasty - b > 0){
                y[i] = y[i-1]+lasty-b;
            }
            else y[i] = y[i-1];
            lasty = b;
        }
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        int ab, ba;
        cin >> ab >> ba;
        if(ab <ba){
            cout << x[ba-1] -x[ab-1];
        }
        else if(ab > ba){
            cout << y[ab-1] - y[ba-1];
        }
        else cout << 0;
        cout <<"\n";
    }
}