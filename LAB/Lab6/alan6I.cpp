#include <iostream>
using namespace std;
void cap(string s){
    for(int i=0; i<s.size(); i+=2){
        if(s[i] > 90) s[i] -= 32;
    }cout << s;
    return;
}
int main(){
    string s;
    cin >> s;
    cap(s);
}