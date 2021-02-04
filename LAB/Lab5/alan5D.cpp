#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=s.size();
    int p=1, m=n-1;
    for(int i=0; i<n; i++){
        if(s[i]!=s[m]) p=0;
        m--;
    }if(p) cout << "YES";
    else cout << "NO";
}