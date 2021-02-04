#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, vec, k, res = 0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> vec;
        v.push_back(vec);
    }cin >> k;
    for(int k1=0; k1<k; k1++){
        int max = v[0], indx = 0;
        for(int i=1; i<v.size(); i++){
            if(v[i] > max){
                max = v[i];
                indx = i;
            }
        }res += max;
        v.erase(v.begin() + indx);
    }cout << res;
}