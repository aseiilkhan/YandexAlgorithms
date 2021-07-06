#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int maxi = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]> maxi) maxi = a[i];
    }
    int tf = false;
    int m = -1;
    for(int i = 0; i < n-1; i++){
        if(i > 0 && tf && a[i]%10 == 5 && a[i+1]< a[i]){
            if(a[i]> m) m = a[i];
        }
        if(a[i] == maxi) tf = true;
    }
    if(m == -1){
        cout << 0;
        return 0;
    }
    sort(a, a+n);
    int place = 1;
    int count = 1;
    for(int i = n-1; i>=0; i--){
        if(i < n-1 && a[i] == a[i+1]) count++;
        if(i < n-1 && a[i]<a[i+1]) {place += count; count = 1;}
        if(a[i] == m){
            cout << place;
            return 0;
        } 
    }
    
}