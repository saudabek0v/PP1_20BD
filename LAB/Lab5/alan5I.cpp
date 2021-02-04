#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << "NO";
        return 0;
    }for(int j=0; j<t.size(); j++){
        for(int i=0; i<s.size(); i++){
            if(s[i] == t[j]){
                s = s.erase(i, 1);
                continue;
            }
        }
    }if(s.size()==0) cout << "YES";
    else cout << "NO";
}