#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k, vec;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> vec;
        v.push_back(vec);
    }cin >> k;
    for(int k1=0; k1<k; k1++){
        int min = v[0], indx = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i]<min){
                min = v[i];
                indx = i;
            }
        }v.erase(v.begin()+indx);
        cout << min << ' ';
    }
}