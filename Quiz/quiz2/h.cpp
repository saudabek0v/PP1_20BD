#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == x) continue;
        else cout << s[i];
    }
}