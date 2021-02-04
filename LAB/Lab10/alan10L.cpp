#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, cnt = 0; 
    cin >> n;
    int m = n;
    while(m > 0){
        cnt += m;
        m--;
    }vector<int> v (cnt);
    int p = 0;
    for(int i=1; i<=n; i++){
        fill(v.begin() + p, v.begin() + p + i, i);
        p += i;
    }
    for(int i=0; i<v.size(); i++)
        cout << v[i] << ' ';
}