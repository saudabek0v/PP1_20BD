#include <iostream>
#include <set>
#include <map>
using namespace std;
map<char, int> m;
int main(){
    int n; cin >> n;
    for(int a=0; a<n; a++){
        string s; cin >> s;
        set<char> let;
        for(int i=0; i<s.size(); i++) let.insert(s[i]);
        set<char>::iterator it;
        for(it = let.begin(); it != let.end(); it++) m[*it]++;
    }
    map<char, int>::iterator it;
    bool ch = false;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second == n){
            cout << it->first << ' ';
            ch = true;
        } 
    }if(ch == false) cout << "NO COMMON CHARACTERS";
}