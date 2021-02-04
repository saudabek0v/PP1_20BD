#include <iostream>
#include <map>
using namespace std;
map<string, int> m;
int main(){
    int n;
    cin >> n;
    string s;
    for(int i=1; i<=n; i++){
        cin >> s;
        map<string, int>::iterator it = m.begin();
        bool ch = false;
        for( ; it != m.end(); it++) if(it->first == s) ch = true;
        if(ch == false) m[s] = i;
    }map<string, int>::iterator i = m.begin();
    for( ; i != m.end(); i++){
        cout << i->first << ' ' << i->second << '\n';
    }
}