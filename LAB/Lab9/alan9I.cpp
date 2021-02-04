#include <iostream>
#include <map>
using namespace std;
map<string, int> m;
int main(){
    int n;
    cin >> n;
    string s;
    map<int, int> check;
    for(int i=0; i<n; i++){
        cin >> s;
        map<string, int>::iterator it = m.begin();
        bool ch = false;
        for( ; it != m.end(); it++) if(it->first == s) ch = true;
        if(ch == false){
            m[s]++;
            check[i] = 1;
        }else check[i] = 0;
    }map<int, int>::iterator it = check.begin();
    for( ; it != check.end(); it++){
        if(it->second == 1) cout << "new user added\n";
        else cout << "user already exists\n";
    }
}