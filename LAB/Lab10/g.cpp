#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<int, string> h;
int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string f, s, both;
        int a, b;
        cin >> f >> a >> s >> b;
        both += f + " and " + s;
        h.insert(make_pair(a+b, both));
    }
    map<int, string>::iterator it;
    for(it = h.begin(); it != h.end(); it++)
        cout << it->second << ' ' << it->first << '\n';
}