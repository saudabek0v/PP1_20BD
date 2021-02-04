#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
pair<string, double> p[1000];
int main(){
    int n, cnt = 0; 
    cin >> n;
    pair<double, int> indx[1000];
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int x; cin >> x;
        cnt += x;
        p[i].first = s;
        p[i].second = x;
    }
    for(int i=0; i<n; i++){
        indx[i].first = p[i].second * 100 / cnt;
        indx[i].second = i;
    }sort(indx, indx + n);
    for(int i=0; i<n; i++)
        cout << p[indx[i].second].first << ' ' <<  indx[i].first << "%\n";
}