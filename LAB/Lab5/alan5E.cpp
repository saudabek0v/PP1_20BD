#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int e=0, o=0;
    for(int i=0; i<n; i+=2) e+=s[i];
    for(int i=1; i<n; i+=2) o+=s[i];
    if(e==o) cout << "YES";
    else cout << "NO";
}