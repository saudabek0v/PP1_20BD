#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }v2 = v1;
    reverse(v2.begin(), v2.end());
    rotate(v2.begin(), v2.end() - m, v2.end());
    for(int i=0; i<v2.size(); i++)
        cout << v2[i] << ' ';
}