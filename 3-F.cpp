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
    unordered_map<string, int> m1;
    unordered_map<string, int> m2;
    for(int i = 0; i < s1.size()-1; i++){
        string x = "";
        x = x+ s1[i]+s1[i+1];
        m1[x]++;
    }
    for(int i = 0; i < s2.size()-1; i++){
        string x = "";
        x = x+ s2[i]+s2[i+1];
        m2[x]++;
    }
    int ans = 0;
    for(auto it: m2){
        if(m1[it.first]!= 0){
            ans+= m1[it.first];
        }
    }
    fout << ans;
}