#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }sort(v.begin(), v.end());
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]%2==0) cout << v[i] << ' ';
    }for(int i=0; i<v.size(); i++){
        if(v[i]%2==1) cout << v[i] << ' ';
    }
}