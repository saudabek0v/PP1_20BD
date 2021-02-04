#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair<int, int> p[500];
    for(int i=0; i<n; i++){
        int first, second;
        cin >> first >> second;
        p[i].first = first + second;
        p[i].second = i + 1;
    }sort(p, p+n);
    for(int i=0; i<n; i++) cout << p[i].second << ' ';
}