#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    string s1, s2;
    getline(fin, s1);
    getline(fin,s2);
    vector<int> a;
    vector<int> b;
    int num = 0;
    bool t =false;
    for(int i = 0; i < s1.size(); i++){
        if((s1[i] ==' ' || s1[i]== '\0' || s1[i]== '\n') && t){
            a.push_back(num);
            num = 0;
            t = false;
            
        }
        else{
            num= num*10 + (s1[i]- '0');
            t = true;
        }
    }
    a.push_back(num);
    num = 0;
    t = false;
    for(int i = 0; i < s2.size(); i++){
        if((s2[i] ==' ' || s2[i]== '\0' || s2[i]== '\n') && t){
            b.push_back(num);
            num = 0;
            t = 0;
        }
        else{
            num= num*10 + (s2[i]- '0');
            t = 1;
        }
    }

    b.push_back(num);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int l = INT_MIN;
    int x = 0;
    int y = 0;
    vector<int> c;
    while(x < a.size() && y < b.size()){
        if(a[x] < b[y]) x++;
        else if(a[x]> b[y]) y++;
        else{
            if(a[x] == l){x++; y++; continue;}
            else{
                c.push_back(a[x]);
                l = a[x];
            }
        }
    }
    for(int i = 0; i < c.size(); i++){
        fout <<c[i]<<" ";
    }
}