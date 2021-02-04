#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void palindrome(string s, string t, int i){
    if(i == s.size()){
        cout << "Yes";
        return;
    }if(s[i] != t[i]){
        cout << "No";
        return;
    }palindrome(s, t, i+1);
}
int main(){
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    palindrome(s, t, 0);
}