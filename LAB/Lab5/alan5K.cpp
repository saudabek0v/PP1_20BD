#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int g=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117) g++;
    }cout << g;
}