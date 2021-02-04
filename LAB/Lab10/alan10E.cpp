#include <iostream>
#include <map>
using namespace std;
map<string, double> g;
int main(){
    int n, res = 0; 
    cin >> n;
    for(int i=0; i<n; i++){
        int m; cin >> m;
        for(int j=0; j<m; j++){
            string s;
            double x;
            cin >> s >> x;
            g[s] += x;
            res += x;
        }
    }
    map<string, double>::iterator it;
    for(it = g.begin(); it != g.end(); it++)
        it->second = it->second * 100 / res;
    for(it = g.begin(); it != g.end(); it++)
        cout << it->first << ' ' << it->second << '\n';
    
}