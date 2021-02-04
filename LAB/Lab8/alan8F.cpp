#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, x, k, a;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }cin >> k >> a;
    v.insert(v.begin()+k, a);
    for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
}