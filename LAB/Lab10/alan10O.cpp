#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void binary(int a){
    vector<int> bin;
    int x = a;
    while(x > 0){
        bin.push_back(x%2);
        x /= 2;
    }for(int i=bin.size()-1; i>=0; i--) cout << bin[i];
    cout << '\n';
}
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }for_each(v.begin(), v.end(), binary);
}