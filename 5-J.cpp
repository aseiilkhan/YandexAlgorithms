#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>>  v(n, {0,0});
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v[i] = {a,b};
    }
    bool ok = 0;
    long long ans = 0;
    long long count1 = 0;
    for(int i = 0; i < n; i++){
        count1 = 0;
        vector<long long> lengths;
        set<pair<int, int>> s;
        for(int j = 0; j < n; j++){
            int x = v[j].first - v[i].first;
            int y = v[j].second - v[i].second;
            if(s.count({-x, -y})){ count1--;}
            s.insert({x, y});
            long long l =  (long long)x*(long long)x +(long long)y*(long long)y;
            lengths.push_back(l);
        }
        sort(lengths.begin(), lengths.end());   
        int l = 0;
        int r = 0;
        while(l < lengths.size()){
            while(r < lengths.size() && lengths[r] == lengths[l]){
                r++;
                count1+= r-l-1;
            }
            
            l++;
        }
        ans+= count1;
    }
    cout << ans;
}