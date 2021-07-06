#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> m;
    int start = 0, end = 0;
    int maxcount = 0;
    int count = maxcount;
    int ans = 0;
    int left = 0;
    m[s[0]]++;
    count = 1;
    maxcount = 1;
    while(start < n){
        while(end < n && count == maxcount){
            end++;
            if(m.find(s[end]) == m.end()){
                maxcount++;
                count++;
            }
            m[s[end]]++;
            //cout << start << " AAAAAAAA " << m[s[end]]<<"\n";
            if(m[s[end]] > k) count --;
        }
        //cout << count <<" and " << maxcount-1<<"\n";
        if(ans < end - start && count >= maxcount-1){
            ans = end - start;
            left = start+1;
        }
        //cout << start << " " << end<<"\n";
        //cout << s[start]<<"\n";
        m[s[start]]--;
        if(m[s[start]]== k) count++;
        start++;
    }
    cout << ans <<" "<< left<<"\n";
}