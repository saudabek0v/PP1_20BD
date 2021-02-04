#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<string, string> mp;
vector<int> v;
int main(){
    int n, m;
    cin >> n;
    string s, t;
    for(int i = 0; i < n; i++){
        cin >> s >> t;
        mp[s] = t;
    }cin >> m;
    for(int i = 0; i < m; i++){
        cin >> s >> t;
        map<string, string>::iterator it;
        bool ch_log = false;
        for(it = mp.begin(); it != mp.end(); it++)
            if(it->first == s) ch_log = true;
        if(ch_log){
            bool ch_pass = false;
            for(it = mp.begin(); it != mp.end(); it++)
                if(it->second == t) ch_pass = true;
            if(ch_pass) v.push_back(1);
            else v.push_back(-1);
        }else v.push_back(0);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 1) cout << "correct password\n";
        if(v[i] == -1) cout << "password error\n";
        if(v[i] == 0) cout << "login error\n";
    }
}