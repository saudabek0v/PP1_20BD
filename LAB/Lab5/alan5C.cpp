#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int x=t.size(), y=s.size(), p;
    int n=y-x, q=0;
    char qq;
    for(int i=0; i<=n; i++){
        p=0;
        for(int j=0; j<x; j++){
            if(t[j]>=65 && t[j]<=90){
                qq = s[j+q] + ' ';
                if(t[j] == s[j+q] || t[j] == qq) p++;
            }
            else if(t[j]>=97 && t[j]<=122){
                qq = s[j+q] - ' ';
                if(t[j] == s[j+q] || t[j] == qq) p++;
            }
        }if(p==x){
            cout << "YES";
            return 0;
        }q++;
    }cout << "NO";
    cout << qq;
}