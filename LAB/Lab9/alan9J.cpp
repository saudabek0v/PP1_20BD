#include <iostream>
#include <map>
using namespace std;
map<string, int> m;
int main(){
    int n, x;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s >> x;
        m[s] += x;
    }map<string, int>::iterator i = m.begin();
    for( ; i != m.end(); i++)
        cout << i->first << ' ' << i->second << '\n';
}