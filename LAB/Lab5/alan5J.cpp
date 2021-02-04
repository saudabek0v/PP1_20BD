#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;            
    cin >> s;
    t=s;                       
    reverse(t.begin(), t.end());
    if(s == t){
        cout << "YES";
        return 0;
    }s = s.erase(0,1);
    t=s;
    reverse(t.begin(), t.end());
    if(s == t) cout << "YES";
    else cout << "NO";
}