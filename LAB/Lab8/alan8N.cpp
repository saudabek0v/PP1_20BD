#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, vec;
    cin >> n;
    vector<int> v;
    vector<int> v2;
    for(int i=0; i<n; i++){
        cin >> vec;
        v.push_back(vec);
    }v2.push_back(v[0]);
    for(int i=1; i<v.size(); i++){
        bool same = false;
        for(int j=i-1; j>=0; j--){
            if(v[i] == v[j]){
                same = true;
                break;
            }
        }if(same == false) v2.push_back(v[i]);
    }for(int i=0; i<v2.size(); i++){
        if(v2[i] % 2 != 0) cout << v2[i] << ' ';
    }
}