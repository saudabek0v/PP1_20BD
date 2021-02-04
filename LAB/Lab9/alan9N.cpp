#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, int> m;
vector<int> v;
int main(){
    int n, res = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        m[v[i]] = 1;
    }for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            if(m[v[i]^v[j]]) res++;
    cout << res;
}