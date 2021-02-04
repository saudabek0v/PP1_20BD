#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, vec, k;
    bool search=false;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> vec;
        v.push_back(vec);
    }cin >> k;
    for(int i=0; i<v.size(); i++){
        if(v[i] == k){
            search = true;
            break;
        }
    }if(search) cout << "Yes";
    else cout << "No";
}