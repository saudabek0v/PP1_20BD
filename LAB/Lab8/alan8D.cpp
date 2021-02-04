#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x, e;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }cin >> e;
    v.erase(v.begin()+e);
    for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
}