#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        int x = s[i];
        s[i] = x + 26 - (x - 'a') - (x - 96);
        cout << s[i];
    }
}