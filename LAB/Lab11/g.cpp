#include <iostream>
#include <map>
using namespace std;
map<string, int> bon;
int main(){
    int n; cin >> n;
    multimap<string, int> att;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int x; cin >> x;
        if(att.find(s)->second != x) bon[s]++;
        att.insert(make_pair(s, x));
    }
    map<string, int>::iterator it;
    for(it = bon.begin(); it != bon.end(); it++){
        if(it->second >= 3) cout << it->first << " +1\n";
        else cout << it->first << " NO BONUS\n";
    }
}