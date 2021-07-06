#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int > m;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        m[a]++;
    }
    auto start = m.begin(), end = m.begin();
    long long res = 0;
    int cur = 0;
    int doubles = 0;
    int d = 0;
    while(start != m.end()){
        while(end != m.end() && (double)end->first / (double)start->first <= (double)k){
            //cout << start->first <<" "<< end->first<<"\n";
            if(end->second >= 2) doubles++;
            d++;
            end++;
        }
        if(start->second >=2) doubles--;
        res+= doubles*3;
        //cout << " x y y " << doubles* 3<<"\n";
        res+= (long long)6*(long long)(d-1)*(long long)(d-2)/(long long)2;
        //cout << " x y z " << 3*(distance(start, end)-1)*(distance(start, end) -2)/2<<"\n";
        if(start->second >= 2){
            res += (d -1)*3;
        //    cout << " x x y " << (distance(start,end) -1)*3<<"\n";
        }
        if(start->second >= 3) {
            res++;
          //  cout << " x x x " << 1 << "\n";    
        }
        //cout << start->first <<" " << res<<"\n";
        start++;
        d--;
    }
    cout << res;
}