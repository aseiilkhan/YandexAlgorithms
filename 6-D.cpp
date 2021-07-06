#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, a, b, w, h;
    cin >> n >> a >> b >> w >> h;
    long long left = 0;
    long long right = max(max(w -a ,w -b), max(h- a, h-b));
    while(left < right){
        long long mid = (left+right+1)/2;
        long long na = a+2*mid;
        long long nb = b+2*mid;
        if((long long)(w/na) * (long long)(h/nb) >= n|| (long long)(w/nb) * (long long)(h/na) >= n){
            left = mid;
        }
        else right = mid-1;
    }
    cout << right;
}