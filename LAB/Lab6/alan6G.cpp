#include <iostream>
#include <string>
using namespace std;
void novowel(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117 || s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85)
            continue;
        else
            cout << s[i];
    }
}
int main(){
    string s;
    getline(cin, s);
    novowel(s);
}