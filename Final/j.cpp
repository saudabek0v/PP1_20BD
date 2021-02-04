#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    if(s == t){
        cout << 0;
        return 0;
    }vector<char> a, b;
    for(int i=0; i<s.size(); i++) a.push_back(s[i]);
    for(int i=0; i<t.size(); i++) b.push_back(t[i]);
    vector<char> ret = a;
    for(int x=1; ; x++){
        rotate(a.begin(), a.end()-1, a.end());
        if(a == b){
            cout << x;
            return 0;
        }if(ret == a){
            cout << "Understandable have a nice day";
            return 0;
        }
    }
}