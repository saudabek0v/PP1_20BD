#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, vec;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> vec;
        v.push_back(vec);
    }int res = v[0];
    for(int i=1; i<v.size(); i++){
        bool same = false;
        for(int j=i-1; j>=0; j--){
            if(v[i] == v[j]){
                same = true;
                break;
            }
        }if(same == false) res += v[i];
    }cout << res;
}