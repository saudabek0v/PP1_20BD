#include <iostream>
#include <map>
using namespace std;
map<int, int> mp;
int main(){
    int n, x, res = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        mp[x]++;
    }map<int, int>::iterator it = mp.begin();
    for( ; it != mp.end(); it++)
        if(it->second >= 2) res++;
    cout << res;
}