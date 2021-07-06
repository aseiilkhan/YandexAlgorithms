#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        c.push_back(a);
    }
    map<int, int> m;
    int start = 0, end = 0;
    int count = 0;
    int left = 1, right = n;
    m[c[0]]++;
    count = 1;
    while(start < n && end < n){ 
        while(count < k){
            end++;
            if(end < n){
                m[c[end]]++;
                if(m[c[end]] == 1) count++;

            }
            else break;
        }
        if(end >= n) break;;
        while(m[c[start]] > 1){
            m[c[start]]--;
            start++;
        }
        if(count == k){
            if(end-start+1 < right - left+1){
                right = end+1;
                left = start+1;
            }
            if(m[c[start]] == 1){
                count--;
            }
            m[c[start]]--;
            start++;
        }
    }
    cout << left <<" "<< right;
}