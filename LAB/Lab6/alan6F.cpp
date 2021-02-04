#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void val(string s){
    int n, dig = 0;
    cin >> n;
    for(int i = 0; i<s.size(); i++) if(s[i] >= '0' && s[i] <= '9') dig++;
    if(n <= dig) cout << "YES";
    else cout << "NO";
}int main(){
    string s;
    cin >> s;
    val(s);
}