#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double l = 30;
    double r = 4000;
    double x, y;
    for(int i = 0; i < n; i++){
        if(i == 0) cin >> x;
        else{
            cin >> y;
            string s;
            double nl, nr;
            getline(cin, s, '\n');
            if(s == " closer"){
                if(y <= x){
                    nl = l;
                    nr = (y+x)/2;
                }
                else{
                    nr = r;
                    nl = (y+x)/2;
                }
            }
            else if(s== " further"){
                if(y <= x){
                    nr = r;
                    nl = (y+x)/2;
                }
                else{
                    nl = l;
                    nr = (y+x)/2;
                }
            }


            if(r >= nr) r = nr;
            if(l <= nl) l = nl;
            x = y;
        }
    }
    printf("%.6f %.6f",l, r);
}