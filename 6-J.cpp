#include <algorithm>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;
using namespace std;
long long countt;
int countless(vector<int>& a, int x){
    int l = a.size();
    int left = 0;
    int right = l-1;
    int mid;
    while(left < right){
        mid = left+(right-left)/2;
        (a[mid] < x)? (left = mid+1) : (right = mid);
    }
    return left;
}

void cl(int &numLess,  vector<int> &sequence, const int &mid)
{
    numLess = countless(sequence, mid);
    numLess = (sequence[numLess] < mid) ? (sequence.size()) : (numLess);
}

void cg(int &numGreater,  vector<int> &sequence, const int &mid)
{
    numGreater = countless(sequence, mid + 1);

    numGreater = (sequence[numGreater] <= mid) ? (0) : (sequence.size() - numGreater);
}

int median(vector<int>& leftList, vector<int>& rightList){
    countt++;
    int left = min(leftList.front(), rightList.front());
    int right = max(leftList.back(), rightList.back());
    int m;
    int l = leftList.size();
    int n1, n2 , g2 ,g1;
    int numless, numgreater;
    while(left < right){
        m = left + (right-left)/2;
        cl(n1, leftList, m);
        cl(n2, rightList, m);
        cg(g1, leftList, m);
        cg(g2, rightList, m);
        numless = n1+n2;
        numgreater = g1+g2;
        if(numless <= l - 1 && numgreater <= l){
            return m;
        }
        if(numless >= l){
            right = m-1;
        }
        if(numgreater > l)
            left = m+1;
    }
    return left;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    countt = 0;
    int n, l;
    cin >> n >> l;
    vector<vector<int>> lists;
    vector<int> list;
    for(int i = 0; i < n; i++){
        list = {};
        for(int j = 0; j < l; j++){
            int a;
            cin >> a;
            list.emplace_back(a);
        }
        lists.emplace_back(list);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <n ; j++){
            cout << median(lists[i], lists[j])<<"\n";
        }
    }
}
