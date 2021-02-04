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
    }int max = v[0], min = v[0];
    for(int i=1; i<v.size(); i++){
        if(max < v[i]) max = v[i];
        if(min > v[i]) min = v[i];
    }cout << max - min;
}