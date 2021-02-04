#include <iostream>
using namespace std;
int main(){
    string s;
    char a;
    int n, h=0;
    cin >> s >> a >> n;
    for(int i=0; i<s.size(); i++) if(s[i]==a) h++;
    if(h==n) cout << "YES";
    else cout << "NO";
}