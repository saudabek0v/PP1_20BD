#include <iostream>
#include <map>
using namespace std;
map<string, int> m;
int main(){
    string s;
    int n, res = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        m[s]++;
    }map<string, int>::iterator it = m.begin();
    for( ; it != m.end(); it++)
        if(it->second == 3) res++;
    cout << res;
}