#include <iostream>
#include <map>
using namespace std;
map<int, int> m;
int main(){
    int n, a, x;
    cin >> n >> a;
    for(int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }cout << m[a];
}