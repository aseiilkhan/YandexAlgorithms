#include <bits/stdc++.h>
using namespace std;
    int main(){
    int t, d, n;
    cin >> t >> d >>n;
    int x, y = 0;
    int tm = 0, bm = 0, tp = 0, bp = 0;

    for(int i = 0; i < n; i++){
        bm+= t;
        tm -= t;
        tp +=t;
        bp -= t;
        int x, y;
        cin >> x >> y;
        int ntp = x+d+y;
        int nbp = x-d+y;
        int nbm = x-y+d;
        int ntm = x-y-d;
        bm = min(bm, nbm);
        tm = max(tm, ntm);
        tp = min(tp, ntp);
        bp = max(bp, nbp);
    }
    int count = 0;
    for(int i = bp; i <= tp; i++){
        for(int j = tm; j <= bm; j++){
            if((i+j) % 2 == 0) count++;
        }
    }
    cout << count<<"\n";
    for(int i = bp; i <= tp; i++){
        for(int j = tm; j <= bm; j++){
            if((i+j)% 2== 0)
                cout << (i+j)/2 <<" "<< (i-j)/2 <<"\n";
        }
    }
}