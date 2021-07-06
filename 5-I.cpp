#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    string s;
    cin >> k;
    cin >> s;
    int n = s.size();
    
    int start = 0;
    int end = 0;
    queue<char> q;
    long long count = 0;
    long long ans = 0;
    for(int i = 0; i < k; i++){
        q.push(s[i]);
    }
    end = k;
    while(start < n){
        while(end < n && s[end] == q.front()){
            char x = q.front();
            q.pop();
            q.push(x);
            count++;
            end++;
        }
        ans+= count*(count+1)/2;
        count = 0;
        if(end - start <k) break;
        start = end -k +1;
        if(end < n){
            q.pop();
            q.push(s[end]);
            end++;
        }
    } 
    cout << ans;
}